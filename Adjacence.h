#pragma once
#include "Cellule.h"
#include <iostream>

namespace jdv{

class Adjacence{
    public:
        Adjacence();
        ~Adjacence();
        int Population(*Cellule cellule);
}
}