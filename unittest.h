#ifndef UNITTEST_H 
#define UNITTEST_H

    #include <iostream>
    #include "addition.h"

    class unittest
    {
    private:
        void testAddition() {
            addition Addition;

            if (Addition.add(1,2) != 3) {
                std::cout<< "Test 1 failed!" << std::endl;
            }
            if (Addition.add(3,2) != 5) {
                std::cout<< "Test 2 failed!" << std::endl;
            }
            if (Addition.add(1,1) == 2) {
                std::cout<< "Test successful!" << std::endl;
            }
        }
    public:
        void runTests() {
            testAddition();
        }
    };
    
#endif