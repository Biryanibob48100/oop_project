#ifndef VALIDATOR_H
#define VALIDATOR_H

#include <limits>
#include <iostream>
using namespace std;

class Validator {
public:
    static void clearInput() {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
};

#endif
