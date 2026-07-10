#include "Core.h"
#include <print>
#include "Scene.h"
#include "Entity.h"
#include "Components.h"
int main() {
	Core::PrintWorld();
	ECS::Scene scene;
	ECS::Entity player = scene.CreateEntity("Player");
	ECS::Entity player2 = scene.CreateEntity("Player2");
	ECS::Entity player3 = scene.CreateEntity("Player3");
	ECS::Entity player4 = scene.CreateEntity("Player4");
	std::println("Entity Name: {}", player.GetName());
	std::println("Entity Name: {}", player2.GetName());
	std::println("Entity Name: {}", player3.GetName());
	std::println("Entity Name: {}", player4.GetName());
}