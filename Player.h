#pragma once

#include "GameObject.h"
#include "Obstacle.h"

class Player : public GameObject {
public:
    Player(const std::string& texturePath, const sf::Vector2f& position, const sf::Vector2f& scale = sf::Vector2f(1.0f, 1.0f));
    void update(float deltaTime, const Obstacle& obstacle);

private:
    void handleCollision(const sf::FloatRect& obstacleBounds);
};

