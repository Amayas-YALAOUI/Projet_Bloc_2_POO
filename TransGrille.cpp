#include <iostream>
#include "TransGrille.h"
#include "Grille.h"
#include "Cellule.h"
#include <vector>

namespace jdv{

TransGrille::TransGrille(){};

TransGrille::~TransGrille(){};

Grille TransGrille::Trans_int_cel(std::vector<std::vector<int>> grille_int){
    int x = grille_int[0].size();
    int y = grille_int.size();
    Grille grille_cel = Grille();
    for (int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            if (grille_int[i][j] == 1){
                *Vivant new_cel_viv = Vivant(i, j);
                grille_cel.set_cellule(new_cel_viv);
            }
            if (grille_int[i][j] == 0){
                *Mort new_cel_mor = Mort(i, j);
                grille_cel.set_cellule(new_cel_mor);
            }
        }
    }
    return grille_cel;
}

std::vector<std::vector<int>> Trans_cel_int(Grille grille){
    x = grille.get_x();
    y = grille.get_y();
    grille_int = std::vector<std::vector<int>>;
    for (int i = 0; i<x; i++){
        for (int j = 0; j<y; j++){
            if (grille_int[i][j] == 1){
                *Vivant new_cel_viv = Vivant(i, j);
                grille_int[i][j] = new_cel_viv;
            }
            if (grille_int[i][j] == 0){
                *Mort new_cel_mor = Mort(i, j);
                grille_int[i][j].set_cellule(new_cel_mor);
            }
        }
    }
    return grille_int;
};
}