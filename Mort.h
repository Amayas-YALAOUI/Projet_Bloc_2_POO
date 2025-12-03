#pragma once
#include <iostream>
#include "Cellule.h"
namespace jdv {
    class Mort : public Cellule{
        public:
            Mort();
            Cellule(int x,int y);
            ~Mort();
        private:
    };
}