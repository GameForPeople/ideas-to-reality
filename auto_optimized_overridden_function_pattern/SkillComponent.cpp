#include "SkillComponent.h"
#include "ComponentMacro.h"
#include "ComponentManager.h"

#include "Entity.h"

#include <iostream>

std::set< ComponentFunctionType > SkillComponent::GetComponentDefinedFuntionForFrameWork()
{
	// 쓰읍 이게 오반디
	return SkillComponent::m_functionDefinedSet;
}

SkillComponent::SkillComponent( Entity* entity )
	: BaseComponent( /* entity */ )
{
}

void SkillComponent::OnCreated()
{
	std::cout << "SkillComponent::OnCreated" << std::endl;
}

//CALL_FUNCTION_STATIC( [](){ SkillComponent::m_functionDefinedSet.insert( ComponentFunctionType::OnMoved ); } );
//void SkillComponent::OnUseSkill()
//{
//}

CALL_FUNCTION_STATIC( [](){ SkillComponent::m_functionDefinedSet.insert( ComponentFunctionType::OnUseSkill ); } );
void SkillComponent::OnUseSkill()
{
	std::cout << "SkillComponent::OnUseSkill" << std::endl;
}