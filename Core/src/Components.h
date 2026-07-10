#pragma once
#include <string>
#include "ECSTypes.h"
#include "SparseSet.h"

namespace ECS {

	inline ComponentType GetNextComponentTypeID() {
		static ComponentType nextID = 0;
		return nextID++;
	}

	template<typename T>
	ComponentType GetComponentTypeID() {
		static ComponentType typeID = GetNextComponentTypeID();
		return typeID++;
	}
	struct TransformComponent {
		TransformComponent() = default;
		TransformComponent(const TransformComponent&) = default;
		EntityID m_entity = INVALID_ENTITY_ID;
	};
	
	struct TagComponent {
		std::string Tag;
		TagComponent() = default;
		TagComponent(const TagComponent&) = default;
		TagComponent(std::string_view tag) : Tag(tag) {}
		EntityID m_entity = INVALID_ENTITY_ID;
	};



}