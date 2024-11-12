#include "Player.h"

Player::Player(const std::string& texturePath, const sf::Vector2f& position, const sf::Vector2f& scale)
    : GameObject(texturePath, position, scale) {
}

void Player::update(float deltaTime, const Obstacle& obstacle) {
    sf::Vector2f newPosition = position;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        newPosition.x -= 200.0f * deltaTime;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        newPosition.x += 200.0f * deltaTime;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        newPosition.y -= 200.0f * deltaTime;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        newPosition.y += 200.0f * deltaTime;
    }

    sprite.setPosition(newPosition);
    handleCollision(obstacle.getBounds());
    position = sprite.getPosition();
}

void Player::handleCollision(const sf::FloatRect& obstacleBounds) {
    sf::FloatRect playerBounds = getBounds();

    if (playerBounds.intersects(obstacleBounds)) {
        // Возвращаем игрока на предыдущую позицию
        sprite.setPosition(position);
    }
}
