#include "Scene.h"
#include "Entity.h"
namespace ECS {
    Scene::Scene()
    {
    }

    Scene::~Scene()
    {
    }

    Entity Scene::CreateEntity(std::string_view name)
    {
        EntityID id = m_Registry.CreateEntity();
        Entity entity(id, this);
        entity.AddComponent<TransformComponent>();
        entity.AddComponent<TagComponent>(name.empty() ? "Entity" : name);

        return entity;
    }

    void Scene::DestroyEntity(Entity entity)
    {
        m_Registry.DestroyEntity(entity.GetID());
    }

    void Scene::RenderScene()
    {
    }
}
