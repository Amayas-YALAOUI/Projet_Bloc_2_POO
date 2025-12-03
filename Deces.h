#pragma once 
#include <iostream>
#include "Regle.h"

using namespace std;


namespace jdv {
    class Deces : public Regle {
        public :
            Deces();
            ~Deces();
            bool jugement(Cellule*, int, int);
    };
}