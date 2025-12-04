#include <iostream>
#include "App.h"
#include <String>

namespace jdv{
    App::App(){
        
    }
    
    void App::Choix_Etat(string choix_etat, int nb_it){
        Chargement c;
        Jeu j;
        c.charg(string)
        if (choix_etat="Sauvegarde"){
            Sauvegarde s;
            for (int i, i<=nb_it, i++){
                s.SauvergarderEtat();
                j.fonctionnement(Grille grille);
            }
        else if (choix_etat="Affichage")
            afficher a;
            for (int i, i<=nb_it, i++){
                a.afficher();
                j.fonctionnement(Grille grille);
            }
        }







    }    
    App::~App(){
        
    }
}