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
    Grille grille_cel = Grille(x, y);
    for (int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            if (grille_int[i][j] == 1){
                Vivant* new_cel_viv = new Vivant(i, j);
                grille_cel.set_cellule(new_cel_viv);
            }
            if (grille_int[i][j] == 0){
                Mort* new_cel_mor = new Mort(i, j);
                grille_cel.set_cellule(new_cel_mor);
            }
        }
    }
    return grille_cel;
}

std::vector<std::vector<int>> Trans_cel_int(Grille grille){
    int x = grille.get_x();
    int y = grille.get_y();
    std::vector<int> a;
    std::vector<std::vector<int>> grille_int;
    for (int i =0; i<x; i++){
        grille_int.push_back(a);
        for (int j = 0; j<y; j++){
            grille_int[i].push_back(0);
        }
    }
    for (int i = 0; i<x; i++){
        for (int j = 0; j<y; j++){
            if (dynamic_cast<Vivant*>(grille.get_grille()[i][j])){
                grille_int[i][j] = 1;
            }
            if (dynamic_cast<Mort*>(grille.get_grille()[i][j])){
                grille_int[i][j] = 0;
            }
        }
    }
    return grille_int;
};
}