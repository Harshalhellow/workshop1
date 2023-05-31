#ifndef EXPLOSION_H
#define EXPLOSION_H
#include"GameEntity.h"
#include"Effect.h"

class Explosion: public GameEntity,public Effect {
public: Explosion(int x, int y):GameEntity(x,y,'E'){};
void apply(GameEntity& entity) override{
 std::tuple<int, int> newPos = std::make_tuple(-1, -1);
        entity.setPos(newPos);
        entity.setType('X');
    
}

};

#endif