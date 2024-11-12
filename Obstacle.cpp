#include "Obstacle.h"

Obstacle::Obstacle(const std::string& texturePath, const sf::Vector2f& position, const sf::Vector2f& scale)
    : GameObject(texturePath, position, scale) {
}

void Obstacle::update(float deltaTime) {
    sprite.setPosition(position);
}
