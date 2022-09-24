#pragma once

#include <vector>

#include "ComponentEnum.h"

class BaseComponent;

// Entity에 현재 구현한 모든 것들도 실제로는 툴에의해 자동생성되어야한다. 실제로 파일 하나를 분리해 만들고 이를 실제 엔티티가 상속받도록 처리하는 것이 가장 좋은 방식으로 보인다.
// 다만 그렇게 처리할 경우, 다른 매니저들이 실제 엔티티의 헤더에 포함되는 이슈가 생기지 않을 까? 고민이 필요함
class Entity
{
public:
	Entity();

public:
	BaseComponent* GetComponenet( const ComponentType componentType );

public:
	std::vector< BaseComponent* > m_componentCont;
};