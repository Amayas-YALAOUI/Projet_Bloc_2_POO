#include "Necro.h"
#include <iostream>
#include "Adjacence.h"

using namespace std;

namespace jdv {
    Necro::Necro() {}

    Necro::~Necro() {}

    bool Necro::jugement(Cellule* cell, int val1, int val2) {
        Adjacence r;
        if (r.adjacence(cell*) < val1 && r.adjacence(cell*) > val2){
            return 1;
        }
        else {
            return 0;
        }
    }
}