#include "Deces.h"
#include <iostream>
#include "Adjacence.h"

using namespace std;

namespace jdv {
    Deces::Deces() {}

    Deces::~Deces() {}

    bool Deces::jugement(Cellule* cell, int val1, int val2) {
        Adjacence r;
        if (r.adjacence(cell*) <= val1 && >= val2){
            return 1;
        }
        else {
            return 0;
        }
    }
}