#include "Survie.h"
#include <iostream>
#include "Adjacence.h"

using namespace std;

namespace jdv {
    Survie::Survie() {
        val1 = 3;
        val2 = 2;
    }

    Survie::~Survie() {}

    bool Survie::jugement(Cellule* cell, Grille grille){
        if (dynamic_cast<Vivant*>(cell)){
            Adjacence r;
            int voisin = r.Population(cell, grille);
            if (voisin == 2 || voisin == 3){
                return 1;
            }
            else {
                return 0;
            }
        }
        else {
            return 0;
        }


}
}