#pragma once 
#include <iostream>
#include "Regle.h"
#include "Cellule.h"

using namespace std;

namespace jdv {
    class Survie : public Regle {
        public :
            Survie();
            ~Survie();
            bool jugement(Cellule*, int, int);
    };
}