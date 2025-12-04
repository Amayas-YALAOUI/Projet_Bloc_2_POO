#include "Cellule.h"
#include <iostream>
namespace jdv{
    void Cellule::set_x(int x){
        this->x = x;
    }
    int Cellule::get_x(){
        return x;
    }
    void Cellule::set_y(int y){
        this->y = y;
    }
    int Cellule::get_y(){
        return y;
    }
    Cellule::Cellule(int x, int y){
        this->x=x;
        this->y=y;
    }

    
}


