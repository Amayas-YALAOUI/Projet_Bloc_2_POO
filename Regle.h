#pragma once
#include <iostream>
#include "Cellule.h"

using namespace std;

namespace jdv {
    class Regle {
        public :
            Regle();
            ~Regle();
            int getValeur();
            int setValeur(int);
            virtual bool jugement(Cellule*, int);
        private :
            int valeur;

;

};
}