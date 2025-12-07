#include <iostream>
#include "Adjacence.h"
namespace jdv{
Adjacence::Adjacence(){};

Adjacence::~Adjacence(){};

int Adjacence::Population(Cellule* cellule, Grille grille){
    int cpt = 0;
    int x = cellule->get_x();
    int y = cellule->get_y();
    int x_g = grille.get_x();
    int y_g = grille.get_y();
    std::vector<std::vector<Cellule*>> damier = grille.get_grille();
    for (int i = -1; i <= 1; i++){
        for (int j = -1; j <= 1; j++){
            if (i == 0 && j == 0) continue;
            int x_a = ((x + i) % x_g + x_g) % x_g;
            int y_a = ((y + j) % y_g + y_g) % y_g;
            Cellule* voisine = damier[x_a][y_a];

            if (voisine && dynamic_cast<Vivant*>(voisine)){
                cpt += 1;
            }
        }
    }
    return cpt;
}
}
 