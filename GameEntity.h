
#ifndef GAMEENTITY_H
#define GAMEENTITY_h
#include<iostream>
#include <tuple>
#include <cmath>
#include <cstdlib>
#include <ctime>
class GameEntity {
private:
std::tuple<int, int> position;
char type;
public:
GameEntity(int x, int y, char type) {
    this-> position = std::make_tuple(x, y);
    this-> type = type;
    
};

char getType(){
    return type;
};
 std::tuple<int, int> getPos() const {
        return this->position;
    }

void setPos( std::tuple<int, int>& newPos) {
        this->position = newPos;
    };

void setType(char newType) {
        this->type = newType;
    };


};

#endif