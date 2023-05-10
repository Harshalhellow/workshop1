// UnitTest.h

#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }
        
        // New test 2
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 2 failed!" << std::endl;
        }
        
        // New test 3
        if (addition.add(-3, 2) != -1) {
            std::cout << "Test 3 failed!" << std::endl;
        }
        
        // New test 4
        if (addition.add(7, -3) != 4) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }
};
