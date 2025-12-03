#include "Regle.h"
#include <iostream>

using namespace std;

namespace jdv {
    Regle::Regle() {}

    Regle::~Regle() {}

    int Regle::getValeur() {
        return valeur;
    }

    int Regle::setValeur(int valeur) {
        this->valeur = valeur;
        return this->valeur;
    }

}