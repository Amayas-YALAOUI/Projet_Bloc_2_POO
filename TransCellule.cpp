#include <iostream>
#include "TransCellule.h"

namespace jdv{

TransCellule::TransCellule(){};
TransCellule::~TransCellule(){};
void TransCellule::Transformation(Cellule* cellule, Grille grille){
    if (dynamic_cast<Vivant*>(cellule)){
        Mort* new_cel = new Mort(cellule->get_x(), cellule->get_y());
        grille.set_cellule(new_cel);
    }
    else{
        dynamic_cast<Mort*>(cellule);
        Vivant* new_cel = new Vivant(cellule->get_x(), cellule->get_y());
        grille.set_cellule(new_cel);
    }
}

}