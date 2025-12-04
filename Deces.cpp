#include "Deces.h"
#include <iostream>
#include "Adjacence.h"


using namespace std;

namespace jdv {
    Deces::Deces() {}

    Deces::~Deces() {}

    bool Deces::jugement(Cellule* cell, int val1, int val2, Grille grille) {
        Adjacence r;
        if (r.Population(cell, grille) <= val1 && r.Population(cell, grille) >= val2){
            return 1;
        }
        else {
            return 0;
        }
    }
}