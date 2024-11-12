#pragma once

#include "GameObject.h"

class Obstacle : public GameObject {
public:
    Obstacle(const std::string& texturePath, const sf::Vector2f& position, const sf::Vector2f& scale = sf::Vector2f(1.0f, 1.0f));
    void update(float deltaTime) override;
};
