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
                bool Regle_survie = s.jugement(cell, s.getVal1(), s.getVal2(), grille);
                bool Regle_deces = d.jugement(cell, d.getVal1(), d.getVal2(), grille);
                bool Regle_naissance = na.jugement(cell, na.getVal1(), na.getVal2(), grille);
                bool Regle_necro = ne.jugement(cell, ne.getVal1(), ne.getVal2(), grille);

                if (Regle_survie){
                    Cellule* nv = new Vivant(static_cast<int>(i), static_cast<int>(j));
                    grille_copie.set_cellule(nv);
                }
                if (Regle_deces){
                    Transformation.Transformation(cell, grille_copie);
                }
                if (Regle_naissance){
                    Transformation.Transformation(cell, grille_copie);
                }
                if (Regle_necro){
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
