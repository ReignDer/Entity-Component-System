#pragma once
#include <vector>
#include "ECSTypes.h"

namespace ECS {
	class EntityManager
	{
	public:
		EntityID CreateEntity();
		void DestroyEntity(EntityID entity);

		void SetSignature(EntityID entity, Signature signature);
		Signature GetSignature(EntityID entity);

	private:
		uint32_t m_NextEntityID = 0;
		std::vector<EntityID> m_AvailableEntites;
		std::vector<Signature> m_Signatures;
	};

}

