#include "BaseComponent.h"
#include <iostream>

void BaseComponent::OnMoved()
{
	std::cout << "BaseComponent::OnMoved" << std::endl;
};

void BaseComponent::OnUseSkill()
{
	std::cout << "BaseComponent::OnUseSkill" << std::endl;
};
