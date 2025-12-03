#include "Etat.h"
#include <iostream>

int jdv::Etat::cpt = 0;

using namespace std;

namespace jdv {
    Etat::Etat() {}

    Etat::~Etat() {}

    int Etat::getCPT(){
        return cpt;
    }
}