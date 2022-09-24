#pragma once

#include <set>

#include "BaseComponent.h"
#include "ComponentEnum.h"

class Entity;

class SkillComponent final
	: public BaseComponent
{
	// for Core
public:
	static std::set< ComponentFunctionType > GetComponentDefinedFuntionForFrameWork();
	inline static std::set< ComponentFunctionType > m_functionDefinedSet;

public:
	SkillComponent( Entity* );
	virtual ~SkillComponent() override{};

public:
	virtual void OnCreated() override;
	//virtual void OnMoved() override;
	virtual void OnUseSkill() override;
};