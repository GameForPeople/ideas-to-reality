#include "ComponentManager.h"

#include "ComponentEnum.h"
#include "Entity.h"

#include "MoveComponent.h"
#include "SkillComponent.h"

#include "magic_enum.hpp"

ComponentManager::ComponentManager()
	: m_funtionDefineCont()
{
	const auto cont1 = MoveComponent::GetComponentDefinedFuntionForFrameWork();
	for ( const auto type : cont1 )
	{
		m_funtionDefineCont[ type ].emplace_back( ComponentType::Move );
	}

	const auto cont2 = SkillComponent::GetComponentDefinedFuntionForFrameWork();
	for ( const auto type : cont2 )
	{
		m_funtionDefineCont[ type ].emplace_back( ComponentType::Skill );
	}
}

void ComponentManager::RunOnCreate( Entity& entity )
{
	// ��ģ���� ��¥�� �� ȣ��Ǿ���ϵ��� �����Ǿ��� ������ �� ȣ���ϰ�
	// enum for each by magic enum
	magic_enum::enum_for_each< ComponentType >( 
		[ &entity ]( ComponentType componentType )
		{
			if ( componentType == ComponentType::Max )
				return;

			entity.GetComponenet( componentType )->OnCreated();
		}
	);
}

void ComponentManager::RunOnMoved( Entity& entity )
{
	// ����ȭ ����, const�� �� ���� �ѹ� ������ ����
	static const auto functionCalledComponentTypeContainer = m_funtionDefineCont[ ComponentFunctionType::OnMoved ];

	for ( const auto componentType : functionCalledComponentTypeContainer )
	{
		entity.GetComponenet( componentType )->OnMoved();
	}
}

void ComponentManager::RunOnUseSkill( Entity& entity )
{
	// ����� ����ȭ ����, const�� �� ���� �ѹ� ������ ����
	static const auto functionCalledComponentTypeContainer = m_funtionDefineCont[ ComponentFunctionType::OnUseSkill ];

	for ( const auto componentType : functionCalledComponentTypeContainer )
	{
		entity.GetComponenet( componentType )->OnUseSkill();
	}
}