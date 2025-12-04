#pragma once
#include <iostream>
#include "Cellule.h"
namespace jdv {
    class Mort : public Cellule{
        public:
            Mort();
            Mort(int x,int y);
            ~Mort() noexcept override = default;
    };
}