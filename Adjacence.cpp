#include <iostream>
#include "Adjacence.h"
namespace jdv{
Adjacence::Adjacence(){};

Adjacence::~Adjacence(){};

int Adjacence::Population(Cellule* cellule, Grille grille){
    int cpt;
    int x = cellule->get_x();
    int y = cellule->get_y();
    int x_g = grille.get_x();
    int y_g = grille.get_y();
    std::vector<std::vector<Cellule*>> damier = grille.get_grille();
    for (int i = -1; i<2; i++){
        for (int j = -1; j<2; j++){
            if(i == 0 && j == 0){}
            else{
                int x_a = x + i;
                int y_a = y + j;
                x_a = x_a%x_g;
                y_a = y_a%y_g;
                if (dynamic_cast<Vivant*>(damier[x+i][y+i])){
                    cpt += 1;
                }
            }
        }
    }
    return cpt;
}
}