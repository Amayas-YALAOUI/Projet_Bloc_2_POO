#include "Naissance.h"
#include <iostream>
#include "Adjacence.h"

using namespace std;

namespace jdv {
    Naissance::Naissance() {
        val1 = 3;
        val2 = 3;
    }

    Naissance::~Naissance() {}

    bool Naissance::jugement(Cellule* cell, Grille grille) {
        if (dynamic_cast<Mort*>(cell)){
            Adjacence r;
            if (r.Population(cell, grille) == 3){
                return 1;
            }
        }
        return 0;
    }
}