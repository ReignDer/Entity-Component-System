#include "Registry.h"

void ECS::Registry::DestroyEntity(EntityID entity)
{
	for (auto& [type, pool] : m_Pools) {
		pool->Remove(entity);

	}

	m_EntityManager.DestroyEntity(entity);
}

ECS::Signature ECS::Registry::GetSignature(EntityID entity)
{
	return m_EntityManager.GetSignature(entity);
}

