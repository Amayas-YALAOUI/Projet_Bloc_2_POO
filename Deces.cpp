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
            int voisin = r.Population(cell, grille);
            if (voisin < 2 || voisin > 3){
                return 1;
            }
        }
        return 0;
    }
}