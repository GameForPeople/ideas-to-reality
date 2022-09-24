#include "MoveComponent.h"
#include "ComponentMacro.h"
#include "ComponentManager.h"

#include "Entity.h"

#include <iostream>

std::set< ComponentFunctionType > MoveComponent::GetComponentDefinedFuntionForFrameWork()
{
	// MoveComponent.cpp가 초기화 된 이후에, m_functionDefinedSet를 반환할 수 있기 위해, 해당 객체를 직접 반환하지 않고, 이렇게 반환하면, 그럴 수 있지 않을 까?
	// 관련 코딩 표준 사항을 명확하게 확인 필요함
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