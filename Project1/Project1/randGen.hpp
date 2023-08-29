//
//  randGen.hpp
//  Project1
//
//  Created by Zhuofan Dong on 10/3/20.
//

#ifndef RANDGEN_H
#define RANDGEN_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <sstream>
#include <stdlib.h>

// macro or symbolic literals (constants)
#define RESET    "\033[0m"
#define BLACK    "\033[30m"
#define RED      "\033[31m"
#define GREEN    "\033[32m"
#define YELLOW   "\033[33m"
#define BLUE     "\033[34m"
#define MAGENTA  "\033[35m"
#define CYAN     "\033[36m"
#define WHITE    "\033[37m"
#define BOLDBLACK    "\033[1m\033[30m"
#define BOLDRED      "\033[1m\033[31m"
#define BOLDGREEN    "\033[1m\033[32m"
#define BOLDYELLOW   "\033[1m\033[33m"
#define BOLDBLUE     "\033[1m\033[34m"
#define BOLDMAGENTA  "\033[1m\033[35m"
#define BOLDCYAN     "\033[1m\033[36m"
#define BOLDWHITE    "\033[1m\033[37m"
/*
class DebugPrint {
    static int debugLevel;
    public:
    void setDebugLevel (int dl);
    int getDebugLevel ();
    void print(int dL, std::string statement);
};
*/


void debugPrint(int dL, std::string statement);
void randGen(std::string range, std::string num);

#endif
