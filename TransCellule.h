#pragma once
#include "Cellule.h"
#include "Grille.h"

namespace jdv{

class TransCellule{
    public:
    TransCellule();
    void Transformation(*Cellule, Grille);
    ~TransCellule();
};
}