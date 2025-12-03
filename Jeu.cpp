#include "Jeu.h"
namespace jdv{

    Jeu::Jeu(){
        
    }
    vector<vector<*Cellule>> Jeu::fonctionnement(Grille){
        Survie=Survie();
        Naissance=Naissance();
        Deces=Deces();
        Necro=Necro();
        grille=Grille(int x,int y,vector<vector<*Cellule>>);
        Population=Population(Cellule,grille)
        Transformation=Transformation(Cellule,grille);
        Cellule=Cellule(int x, int y)
        for (int i = 0; i<10; i++){
            for (int j = 0; j < size(Grille); j++) {
                bool Regle_survie = Survie.Jugement(Cellule, int);
                bool Regle_deces = Deces.Jugement(Cellule, int);
                bool Regle_naissance = Naissance.Jugement(Cellule, int);
                bool Regle_necro = Necro.Jugement(Cellule, int);
                Transition=Transformation.trancellule(Cellule);
                if (Regle_survie == 1){
                    Regle_survie
                }
                if (Regle_deces == 1){
                    Cellule[j]=Transition
                }
                if (Regle_naissance == 1){
                    Cellule[j]=Transition
                }
                if (Regle_necro == 1){
                    Regle_necro
                }
                Population(Cellule,Grille[i]);


            }

    }
}
    Jeu::~Jeu(){
        
    }
    
}
