#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include <iostream>

int main() {
    Ship ship(5, 5);
    std::cout << "Ship position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    ship.move(2, 3);
    std::cout << "Ship new position after move: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";

    Mine mine(10, 10);
    std::cout << "Mine position: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ")\n";

    Explosion explosion = mine.explode();
    std::cout << "Mine status after explosion: " << mine.getType() << "\n";

    explosion.apply(ship);
    std::cout << "Ship position and status after explosion: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << "), " << ship.getType() << "\n";

    return 0;
}