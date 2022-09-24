/*
	Copyright 2022, Won Seong-Yeon. All Rights Reserved.
		KoreaGameMaker@gmail.com
		github.com/GameForPeople
*/

#include <iostream>

#include "Entity.h"
#include "ComponentManager.h"

int main()
{
	Entity entity;

	// 
	std::cout << "RunOnCreate!" << std::endl;
	ComponentManager::GetInstance().RunOnCreate( entity );

	//
	std::cout
		<< std::endl << std::endl
		<< "RunOnMoved!" << std::endl;
	ComponentManager::GetInstance().RunOnMoved( entity );

	//
	std::cout
		<< std::endl << std::endl
		<< "RunOnUseSkill!" << std::endl;
	ComponentManager::GetInstance().RunOnUseSkill( entity );
}