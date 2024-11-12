#include "GameObject.h"

GameObject::GameObject(const std::string& texturePath, const sf::Vector2f& position, const sf::Vector2f& scale)
    : position(position), scale(scale) {
    if (!texture.loadFromFile(texturePath)) {
        // ��������� ������ �������� ��������
    }
    sprite.setTexture(texture);
    sprite.setPosition(position);
    sprite.setScale(scale);
}

void GameObject::update(float deltaTime) {
    // ���������� ��������� �������
}

void GameObject::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}

sf::FloatRect GameObject::getBounds() const {
    return sprite.getGlobalBounds();
}