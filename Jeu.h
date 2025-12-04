#include <iostream>
#pragma once
#include "Cellule.h"
#include "Regle.h"
#include "Grille.h"
#include "TransCellule.h"
#include "Adjacence.h"
#include "Survie.h"
#include "Deces.h"
#include "Naissance.h"
#include "Necro.h"

using namespace std;

namespace jdv{
    class Jeu{
        public:
            Jeu();
            vector<vector<Cellule*>> fonctionnement(Grille);
            ~Jeu();
        private:
    };
} 