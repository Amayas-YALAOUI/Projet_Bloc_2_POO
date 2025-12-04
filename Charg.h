#pragma once
#include <iostream>
#include "Etat.h"
#include <vector>

using namespace std;

namespace jdv{
    class Chargement : public Etat{
        public :
            Chargement();
            Chargement(string);
            vector<vector<bool>>charg(string);
            ~Chargement();
        private :
            string nom;
            string chemin;
    };
}