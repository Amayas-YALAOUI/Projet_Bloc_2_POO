#include "Survie.h"
#include <iostream>
#include "Adjacence.h"

using namespace std;

namespace jdv {
    Survie::Survie() {}

    Survie::~Survie() {}

    bool Survie::jugement(Cellule* cell, int val1, int val2){
        if (dynamic_cast<Vivant>(cell*)){
        Adjacence r;
        if (r.adjacence(cell*) <= val1 && r.adjacence(cell*) >= val2){
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