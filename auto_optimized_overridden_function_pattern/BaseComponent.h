#pragma once

class BaseComponent
{
public:
	BaseComponent() = default;
	virtual ~BaseComponent() {};

	BaseComponent( const BaseComponent& ) = delete;
	BaseComponent& operator=( const BaseComponent& ) = delete;

	BaseComponent( BaseComponent&& ) = delete;
	BaseComponent& operator=( BaseComponent&& ) = delete;

public:
	virtual void OnCreated() = 0;
	virtual void OnMoved();
	virtual void OnUseSkill();
};
