#pragma once
#include <iostream>
#include "Cellule.h"
#include <String>
namespace jdv {
    class Vivant : public Cellule{
        public:
            Vivant();
            Cellule(int x,int y);
            ~Vivant();
        private:
    };
}