#include "Jeu.h"
namespace jdv
{
    Jeu::Jeu(){
        
    }
    vector<vector<*Cellule>> Jeu::fonctionnement(Grille){
        Survie=Survie(Grille);
        Naissance=Naissance(Grille);
        Deces=Deces(Grille);
        Necro=Necro(Grille);
        grille=Grille(int x,int y);
        Population=Population(Cellule,grille)
        Transformation=Transformation(Cellule,grille);
        Cellule=Cellule(int x, int y)
        for (int i = 0; i<10; i++){
            for (int i = 0; i < size(Grille); i++) {
                Survie(Grille[i]);
                Deces(Grille[i]);
                Naissance(Grille[i]);
                Necro(Grille[i]);
                Transformation(Cellule,Grille[i]);
                Population(Cellule,Grille[i]);


            }

    }
}
    Jeu::~Jeu(){
        
    }
    
}
