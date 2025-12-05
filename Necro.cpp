#include "Necro.h"
#include <iostream>
#include "Adjacence.h"

using namespace std;

namespace jdv {
    Necro::Necro() {
        val1 = 2;
        val2 = 4;
    }

    Necro::~Necro() {}

    bool Necro::jugement(Cellule* cell, Grille grille) {
        if (dynamic_cast<Mort*>(cell)){
            Adjacence r;
            if (r.Population(cell, grille) <= val1 || r.Population(cell, grille) >= val2){
                return 1;
            }
        }
        return 0;
    }
    
}
