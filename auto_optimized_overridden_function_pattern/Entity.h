#pragma once

#include <vector>

#include "ComponentEnum.h"

class BaseComponent;

// Entity�� ���� ������ ��� �͵鵵 �����δ� �������� �ڵ������Ǿ���Ѵ�. ������ ���� �ϳ��� �и��� ����� �̸� ���� ��ƼƼ�� ��ӹ޵��� ó���ϴ� ���� ���� ���� ������� ���δ�.
// �ٸ� �׷��� ó���� ���, �ٸ� �Ŵ������� ���� ��ƼƼ�� ����� ���ԵǴ� �̽��� ������ ���� ��? ����� �ʿ���
class Entity
{
public:
	Entity();

public:
	BaseComponent* GetComponenet( const ComponentType componentType );

public:
	std::vector< BaseComponent* > m_componentCont;
};