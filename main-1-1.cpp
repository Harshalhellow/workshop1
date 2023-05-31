#include "GameEntity.h" 
#include"Effect.h"
#include"Utils.h"
#include <iostream>
#include <thread> 
#include <chrono>

int main() {
       srand(time(0));
    std::tuple<int, int> pos1 = Utils::generateRandomPos(100, 100);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::tuple<int, int> pos2 = Utils::generateRandomPos(100, 100);

    std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";

    
    double distance = Utils::calculateDistance(pos1, pos2);
    std::cout << "The distance between the two positions is " << distance << "\n";

    return 0;
}