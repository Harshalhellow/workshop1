#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"
#include <string>


class Warrior : public Player {
public:
    Warrior(std::string name, int health, int damage, std::string weapon);

    std::string getWeapon() const;
    void setWeapon(std::string weapon);

    void swingWeapon(Player* opponent);

private:
    std::string weapon;
};

#endif
