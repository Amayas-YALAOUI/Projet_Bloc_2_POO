#pragma once
#include <string>
#include "Regle.h"
#include "Cellule.h"

using namespace std;

namespace jdv {
    class Naissance : public Regle {
        public :
            Naissance();
            ~Naissance();
            bool jugement(Cellule*, int, int);
    };
}