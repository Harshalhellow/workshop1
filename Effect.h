#ifndef EFFECT_H
#define EFFECT_H
#include<iostream>
#include <tuple>
#include <cmath>
#include <cstdlib>
#include <ctime>

class GameEntity;
class Effect {
public:
virtual void apply(GameEntity& entity)= 0;
};
#endif