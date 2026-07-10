#include "Entity.h"

namespace ECS{
    Entity::Entity(EntityID entity, Scene* scene) : m_EntityHandle(entity), m_Scene(scene)
    {
    }
}
