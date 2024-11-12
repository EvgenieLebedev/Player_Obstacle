#pragma once

#include <SFML/Graphics.hpp>

class GameObject {
public:
    GameObject(const std::string& texturePath, const sf::Vector2f& position, const sf::Vector2f& scale = sf::Vector2f(1.0f, 1.0f));
    virtual void update(float deltaTime);
    virtual void draw(sf::RenderWindow& window);
    sf::FloatRect getBounds() const;

protected:
    sf::Sprite sprite;
    sf::Texture texture;
    sf::Vector2f position;
    sf::Vector2f scale;
};