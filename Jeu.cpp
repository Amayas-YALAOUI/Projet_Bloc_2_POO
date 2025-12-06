#include "Jeu.h"
#include <iostream>

using namespace std;

namespace jdv{

    Jeu::Jeu(){
        
    }
    Grille Jeu::fonctionnement(Grille grille){
        Survie s;
        Naissance na;
        Deces d;
        Necro ne;
        TransCellule Transformation;
        auto get_grille = grille.get_grille();
        Grille grille_copie = grille;
        for (size_t i = 0; i < get_grille.size(); ++i){
            for (size_t j = 0; j < get_grille[i].size(); ++j) {
                Cellule* cell = get_grille[i][j];
                Mort temp_mort(static_cast<int>(i), static_cast<int>(j));
                Cellule* cell_pour_regle;
                if (cell != nullptr) {
                    cell_pour_regle = cell;
                } else {
                    cell_pour_regle = &temp_mort;
                }
                
                bool Regle_survie = s.jugement(cell_pour_regle, grille);
                bool Regle_deces = d.jugement(cell_pour_regle, grille);
                bool Regle_naissance = na.jugement(cell_pour_regle, grille);
                bool Regle_necro = ne.jugement(cell_pour_regle, grille);

                if (Regle_survie || Regle_naissance){
                    Cellule* nv = new Vivant(static_cast<int>(i), static_cast<int>(j));
                    grille_copie.set_cellule(nv);
                }
                else if (Regle_deces || Regle_necro){
                    Cellule* m = new Mort(static_cast<int>(i), static_cast<int>(j));
                    grille_copie.set_cellule(m);
                }
            }
        }
        return grille_copie;
    }
    Jeu::~Jeu(){
        
    }
    
}
