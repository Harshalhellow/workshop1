#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"

class Wizard : public Player {
public:
    Wizard(std::string name, int health, int damage, int mana);

    int getMana() const;
    void setMana(int mana);

    void castSpell(Player* opponent);

private:
    int mana;
};

#endif
