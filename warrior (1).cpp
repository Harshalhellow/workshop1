#include "warrior.h"
#include <iostream>


Warrior::Warrior(std::string name, int health, int damage, std::string weapon) :
    Player(name, health, damage), weapon(weapon) {}

std::string Warrior::getWeapon() const {
    return weapon;
}

void Warrior::setWeapon(std::string weapon) {
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player* opponent) {
    int damage = getDamage() + getWeaponDamage();
    opponent->takeDamage(damage);
    cout << getName() << " swings their " << getWeapon() << " and deals " << damage << " damage to " << opponent->getName() << endl;
}