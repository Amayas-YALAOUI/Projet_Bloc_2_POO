#pragma once
#include <vector>
#include "Cellule.h"
namespace jdv{

class Grille{
    public:
        Grille(int, int);
        ~Grille();
        int get_x();
        int get_y();
        std::vector<std::vector<*Cellule>> get_grille();
        void set_cellule(*Cellule);
    private:
        int x;
        int y;
        std::vector<std::vector<*Cellule>> grille;
};
}