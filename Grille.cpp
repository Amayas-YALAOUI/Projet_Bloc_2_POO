#include <iostream>
#include "Grille.h"

namespace jdv{

Grille::Grille(int x, int y){
    this-> x = x;
    this-> y = y;
    std::vector<Cellule*> a;
    Cellule* b = nullptr;
    for (int i = 0; i<x; i++){
        grille.push_back(a);
        for (int j = 0; j<y; j++){
            grille[i].push_back(b);
        }
    }
}

int Grille::get_x(){
    return x;
}

int Grille::get_y(){
    return y;
}

std::vector<std::vector<Cellule*>> Grille::get_grille(){
    return grille;
}
void Grille::set_cellule(Cellule* cellule){
    int i = cellule->get_x();
    int j = cellule->get_y();
    if (dynamic_cast<Vivant*>(cellule)){
        grille[i][j] = cellule;
    }
    else{
        dynamic_cast<Mort*>(cellule);
        grille[i][j] = cellule;
    }
}
}