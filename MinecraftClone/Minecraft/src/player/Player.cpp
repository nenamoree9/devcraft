#include "Player.h"

Player::Player()
    : health(100.0f), maxHealth(100.0f) {}


void Player::takeDamage(float amount) {
    health -= amount;
    if (health < 0) health = 0;
}

void Player::heal(float amount) {
    health += amount;
    if (health > maxHealth) health = maxHealth;
}

void Player::addItemToInventory(const std::string& item) {
    inventory.push_back(item);
}

void Player::useItem(const std::string& item) {
    // Implement item usage
}

float Player::getHealth() const { return health; }
const std::vector<std::string>& Player::getInventory() const { return inventory; }
