#pragma once 
#include <iostream>
#include "Regle.h"
#include "Grille.h"

using namespace std;


namespace jdv {
    class Deces : public Regle {
        public :
            Deces();
            ~Deces();
            bool jugement(Cellule*, Grille);
        private: 
            int val1;
            int val2;
    };
}