#pragma once 
#include <iostream>
#include "Regle.h"
#include "Cellule.h"
#include "Grille.h"

using namespace std;

namespace jdv {
    class Necro : public Regle {
        public :
            Necro();
            ~Necro();
            bool jugement(Cellule*, int, int, Grille);
    };
}