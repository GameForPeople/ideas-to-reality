#include "MoveComponent.h"
#include "ComponentMacro.h"
#include "ComponentManager.h"

#include "Entity.h"

#include <iostream>

std::set< ComponentFunctionType > MoveComponent::GetComponentDefinedFuntionForFrameWork()
{
	// MoveComponent.cpp�� �ʱ�ȭ �� ���Ŀ�, m_functionDefinedSet�� ��ȯ�� �� �ֱ� ����, �ش� ��ü�� ���� ��ȯ���� �ʰ�, �̷��� ��ȯ�ϸ�, �׷� �� ���� ���� ��?
	// ���� �ڵ� ǥ�� ������ ��Ȯ�ϰ� Ȯ�� �ʿ���
	return MoveComponent::m_functionDefinedSet;
}

MoveComponent::MoveComponent( Entity* entity )
	: BaseComponent( /* entity */ )
{
}

void MoveComponent::OnCreated()
{
	std::cout << "MoveComponent::OnCreated" << std::endl;
}

CALL_FUNCTION_STATIC( [](){ MoveComponent::m_functionDefinedSet.insert( ComponentFunctionType::OnMoved ); } );
void MoveComponent::OnMoved()
{
	std::cout << "MoveComponent::OnMoved" << std::endl;
}

//CALL_FUNCTION_STATIC( [](){ MoveComponent::m_functionDefinedSet.insert( ComponentFunctionType::OnUseSkill ); } );
//void MoveComponent::OnUseSkill()
//{
//}