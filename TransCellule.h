#pragma once
#include "Cellule.h"
#include "Grille.h"
#include <vector>
#include "Mort.h"
#include "Vivant.h"

namespace jdv{

class TransCellule{
    public:
    TransCellule();
    void Transformation(Cellule*, Grille);
    ~TransCellule();
};
}