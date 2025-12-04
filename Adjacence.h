#pragma once
#include "Cellule.h"
#include "Vivant.h"
#include "Grille.h"
#include <vector>
#include <iostream>

namespace jdv{

class Adjacence{
    public:
        Adjacence();
        ~Adjacence();
        int Population(Cellule*, Grille);
};
}