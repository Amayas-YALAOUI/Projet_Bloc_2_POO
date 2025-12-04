#pragma once
#include <iostream>
#include "Cellule.h"
#include <string>
namespace jdv {
    class Vivant : public Cellule{
        public:
            Vivant();
            Vivant(int x, int y);
            ~Vivant() noexcept override = default;
    };
}