#pragma once
#include <string>
#include "Registry.h"
#include "Components.h"
namespace ECS {
	class Entity;
	class Scene
	{
	public:
		Scene();
		~Scene();

		Entity CreateEntity(std::string_view name = std::string());

		void DestroyEntity(Entity entity);

		Registry& GetRegistry() { return m_Registry; }

	private:
		void RenderScene();
	private:
		Registry m_Registry;
		friend class Entity;
	};
}

