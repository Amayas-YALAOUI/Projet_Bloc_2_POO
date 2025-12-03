#include <iostream>
#include "Grille.h"

namespace jdv{

Grille::Grille(int x, int y){
    this-> x = x;
    this-> y = y;
    for (int i = 0; i<x; i++){
        grille.push_back(std::vector<Cellule*>);
        for (int j = 0; j<y; j++){
            grille[i].push_back(*Cellule);
        }
    }
}

int Grille::get_x(){
    return x;
}

int Grille::get_y(){
    return y;
}

int Grille::get_grille(){
    return grille;
}
void Grille::set_cellule(*Cellule cellule){
    int i = *Cellule->get_x();
    int j = *Celluel->get_y();
    if (dynamic_cast<Vivant>(*cellule)){
            grille[i][j] = *cellule;
    }
    else{
        dynamic_cast<Mort>(*cellule);
        grille[i][j] = *cellule;
    }
}
}