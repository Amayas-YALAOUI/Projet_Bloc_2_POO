#include "Survie.h"
#include <iostream>
#include "Adjacence.h"

using namespace std;

namespace jdv {
    Survie::Survie(int val1, int val2) {
        val1 = 3;
        val2 = 2;
    }

    Survie::~Survie() {}

    bool Survie::jugement(Cellule* cell, int val1, int val2, Grille grille){
        if (dynamic_cast<Vivant*>(cell)){
        Adjacence r;
        if (r.Population(cell, grille) <= val1 && r.Population(cell, grille) >= val2){
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