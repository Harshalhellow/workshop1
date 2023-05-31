#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity {
public:
    Ship(int x, int y) : GameEntity(x, y, 'S') {}

    void move(int dx, int dy) {
        std::tuple<int, int> currentPos = getPos();
        int newX = std::get<0>(currentPos) + dx;
        int newY = std::get<1>(currentPos) + dy;
        std::tuple<int, int> newPos = std::make_tuple(newX, newY);
        setPos(newPos);
    }
};

#endif