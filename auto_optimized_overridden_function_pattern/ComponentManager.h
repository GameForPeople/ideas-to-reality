#pragma once

// generated file

#include <map>
#include <vector>

#include "WonSY_Singleton.hpp"

enum class ComponentFunctionType : int;
enum class ComponentType : int;

class Entity;

class ComponentManager
	: public WsySingleton< ComponentManager >
{

public:
	ComponentManager();

public:
	void RunOnCreate( Entity& );
	void RunOnMoved( Entity& );
	void RunOnUseSkill( Entity& );

private:
	std::map< ComponentFunctionType, std::vector< ComponentType > > m_funtionDefineCont;
};
