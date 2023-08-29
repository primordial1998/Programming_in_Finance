//
//  randGen.cpp
//  Project1
//
//  Created by Zhuofan Dong on 10/3/20.
//

#include "randGen.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <sstream>
#include <stdlib.h>

using namespace std;

int debugLevel = 1;

void randGen(std::string strR, std::string strN) {
    int randRange;
    int randNum;
    std::stringstream ss;
    ss << strR;
    ss >> randRange;
    ss.clear();
    // randRange++;
    debugPrint(1, "randRange=" + std::to_string(randRange));
    ss.str(strN);
    ss >> randNum;
    debugPrint(1, "randNum=" + std::to_string(randNum));
    for (int idx=0; idx<randNum; idx++) {
        int myRand = 1 + (rand() % randRange);
        std::cout << "random number " << idx << ": " << myRand << std::endl;
    }

}
void debugPrint(int dL, std::string statement) {

    // std::cout << "debugLevel=" << debugLevel << '\n';
    if (dL < debugLevel) {
        return;
    }
    if (dL == 1) {
        std::cout << GREEN << "DEBUG: " << statement << RESET << std::endl;
    } else if (dL == 2) {
        std::cout << BOLDCYAN << "INFO: " << statement << RESET << std::endl;
    } else if (dL == 3) {
        std::cout << YELLOW << "WARNING: " << statement << RESET << std::endl;
    } else if (dL == 4) {
        std::cout << MAGENTA << "ERROR: " << statement << RESET << std::endl;
    } else if (dL == 5) {
        std::cout << BOLDRED << "FATAL: " << statement << RESET << std::endl;
        exit(EXIT_FAILURE);
    }  else {
        std::cout << "Sepecified debug level: " << dL << " is not defined in debugPrint function\n";
        exit(EXIT_FAILURE);
    }
}
