#include "Deces.h"
#include <iostream>
#include "Adjacence.h"


using namespace std;

namespace jdv {
    Deces::Deces() {
        val1 = 2;
        val2 = 3;
    }

    Deces::~Deces() {}

    bool Deces::jugement(Cellule* cell, Grille grille) {
        if (dynamic_cast<Vivant*>(cell)){
            Adjacence r;
            int neighbors = r.Population(cell, grille);
            if (neighbors < 2 || neighbors > 3){
                return 1;
            }
        }
        return 0;
    }
}