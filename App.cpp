#include <iostream>
#include "App.h"
#include <string>

namespace jdv{
    App::App(){}
    
    void App::Choix_Etat(string choix_etat, int nb_it, string chemin, string nom){
        Chargement c;
        Jeu j;
        vector<vector<int>> damier = c.charg(chemin);
        TransGrille Passage;
        if (choix_etat=="Sauvegarde"){
            Sauvegarde s = Sauvegarde(nom, chemin);
            for (int i = 0; i < nb_it; i++){
                Grille grille = Passage.Trans_int_cel(damier);
                grille = j.fonctionnement(grille);
                damier = Passage.Trans_cel_int(grille);
                s.SauvegarderEtat(damier);
            }
        }
        else if (choix_etat=="Affichage"){
            GUI a(damier.size(), damier[0].size());
            for (int i = 0; i < nb_it; i++){
                Grille grille = Passage.Trans_int_cel(damier);
                grille = j.fonctionnement(grille);
                damier = Passage.Trans_cel_int(grille);
                a.Afficher(damier);
            }
        }
    }    
    App::~App(){
        
    }
}

int main(){};