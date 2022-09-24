#include "Entity.h"

// 추후 자동 생성 되어야함
#include "MoveComponent.h"
#include "SkillComponent.h"


Entity::Entity()
{
	m_componentCont.emplace_back( new MoveComponent( this ) );
	m_componentCont.emplace_back( new SkillComponent( this ) );
}

BaseComponent* Entity::GetComponenet( const ComponentType componentType )
{
	if ( componentType == ComponentType::Max )
		return nullptr;

	return m_componentCont[ static_cast< int >( componentType ) ];
}