//
//  main.cpp
//  Project1
//
//  Created by Zhuofan Dong on 10/3/20.
//

#include <iostream>
#include "randGen.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <sstream>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stringstream;

extern int debugLevel;

int main(int argc, const char * argv[]) {
    
    srand(time(NULL));
    if (argc < 3) {
        cout << "Too few argument for program to work!\n";
        cout << "Usage: " << argv[0] << " range_of_random_number number_of_random_number_needed\n" << endl;
    } else if (argc == 3) {
        cout << "random number generated in the range of 0 to RAND_MAX=" << RAND_MAX << ":\n";
        randGen(argv[1], argv[2]);
    } else if (argc == 4) {
        stringstream ss(argv[3]);
        ss >> debugLevel;
        cout << "debugLevel " << debugLevel << endl;
        randGen(argv[1], argv[2]);
    } else {
        cout << "Too many arguments for program to work!\n";
        cout << "Usage: " << argv[0] << " range_of_random_number number_of_random_number_needed\n" << endl;
    }
    
    return 0;
}
