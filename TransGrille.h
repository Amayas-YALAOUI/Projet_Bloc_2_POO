#pragma once
#include <vector>
#include "Cellule.h"

namespace jdv{

class TransGrille{
    TransGrille();
    ~TransGrille();
    std::vector<std::vector<*Cellule>> Trans_int_cel(std::vector<std::vector<int>>);
    std::vector<std::vector<int>> Trans_cel_int(std::vector<std::vector<*Cellule>>);
}
}