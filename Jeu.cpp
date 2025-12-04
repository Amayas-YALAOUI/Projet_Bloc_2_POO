#include "Jeu.h"
#include <iostream>

using namespace std;

namespace jdv{

    Jeu::Jeu(){
        
    }
    vector<vector<*Cellule>> Jeu::fonctionnement(Grille grille){
        Survie=Survie();
        Naissance=Naissance();
        Deces=Deces();
        Necro=Necro();
        Transformation=Transcellule();
        Cellule=Cellule();
        grrille = grille
        for (size_t i = 0; i<size(grille[0]); i++){
            for (size_t j = 0; j < size(grille); j++) {
                bool Regle_survie = Survie.Jugement(Cellule* cell, int val1, int val2);
                bool Regle_deces = Deces.Jugement(Cellule* cell, int val1, int val2);
                bool Regle_naissance = Naissance.Jugement(Cellule* cell, int val1, int val2);
                bool Regle_necro = Necro.Jugement(Cellule* cell, int val1, int val2);
                Transition=Transformation.Transformation(Cellule,grrille);
                if (Regle_survie == 1){
                    return 1;
                }
                if (Regle_deces == 1){
                    Cellule[i][j]=Transition;
                }
                if (Regle_naissance == 1){
                    Cellule[i][j]=Transition;
                }
                if (Regle_necro == 1){
                    return 0;
                }
                Population(Cellule, Grille[i]);


            }

    }
}
    Jeu::~Jeu(){
        
    }
    
}
