#pragma once
#include <vector>
#include "Cellule.h"
#include "Grille.h"

namespace jdv{

class TransGrille{
    public:
    TransGrille();
    ~TransGrille();
    Grille Trans_int_cel(std::vector<std::vector<int>>);
    std::vector<std::vector<int>> Trans_cel_int(Grille);
};
}