#pragma once
#include <vector>
#include <string>

class Player {
public:
    Player();

    void update(float deltaTime);
    void takeDamage(float amount);
    void heal(float amount);
    void eat(float amount);
    void addItemToInventory(const std::string& item);
    void useItem(const std::string& item);

    float getHealth() const;
    float getHunger() const;
    const std::vector<std::string>& getInventory() const;

private:
    float health;
    float maxHealth;
    float hunger;
    float maxHunger;
    std::vector<std::string> inventory;
};
