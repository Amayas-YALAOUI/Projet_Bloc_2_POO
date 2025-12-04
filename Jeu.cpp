#include "Jeu.h"
#include <iostream>

using namespace std;

namespace jdv{

    Jeu::Jeu(){
        
    }
    vector<vector<*Cellule>> Jeu::fonctionnement(Grille grille){
        Survie s = Survie();
        Naissance na = Naissance();
        Deces d = Deces();
        Necro ne = Necro();
        Transformation=Transcellule();
        get_grille=Grille.get_grille();
        grille_copie = grille;
        for (size_t i = 0; i<size(grille); i++){
            for (size_t j = 0; j < size(grille[0]); j++) {
                *Cellule cell = get_grille[i][j];
                bool Regle_survie = s.Jugement(*cell,val1,val2);
                bool Regle_deces = d.Jugement(*cell,val1,val2);
                bool Regle_naissance = na.Jugement(*cell,val1,val2);
                bool Regle_necro = ne.Jugement(*cell,val1,val2);
                if (Regle_survie == 1){
                    grille_copie[i][j] = *Vivant(i, j);
                }
                if (Regle_deces == 1){
                    Transformation.Transformation(*cell,grille_copie);
                }
                if (Regle_naissance == 1){
                    Transformation.Transformation(*cell,grille_copie);
                }
                if (Regle_necro == 1){
                    grille_copie[i][j] = *Mort(i, j);
                }


            }

    }
    return grille_copie;
}
    Jeu::~Jeu(){
        
    }
    
}
