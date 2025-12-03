#include "Regle.h"
#include <iostream>

using namespace std;

namespace jdv {
    Regle::Regle() {}

    Regle::~Regle() {}

    int Regle::getVal1() {
        return val1;
    }

    int Regle::setVal1(int val1) {
        this->val1 = val1;
        return this->val1;
    }

    int Regle::getVal2() {
        return val2;
    }

    int Regle::setVal2(int val2) {
        this->val2 = val2;
        return this->val2;
    }

}
