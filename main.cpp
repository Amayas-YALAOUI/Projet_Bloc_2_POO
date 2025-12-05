#include <iostream>
#include <vector>
#include "Adjacence.h"
#include "App.h"
#include "Cellule.h"
#include "Charg.h"
#include "Deces.h"
#include "Etat.h"
#include "Grille.h"
#include "GUI.h"
#include "Jeu.h"
#include "Mort.h"
#include "Naissance.h"
#include "Necro.h"
#include "Regle.h"
#include "Sauv.h"
#include "Survie.h"
#include "TransCellule.h"
#include "TransGrille.h"
#include "Vivant.h"

bool Test_Unitaire(int choix){
    jdv::App App;
    jdv::Chargement c;
    jdv::Jeu j;
    jdv::TransGrille Passage;
    if (choix == 0){
        jdv::Sauvegarde s = jdv::Sauvegarde("test_u", "/home/oussama-hamar/Documents/POO/Projet_Bloc_2_POO/");
        vector<vector<int>> damier = c.charg("/home/oussama-hamar/Documents/POO/Projet_Bloc_2_POO/test_unit_0.csv");
        for (int i = 0; i < 3; i++){
            jdv::Grille grille = Passage.Trans_int_cel(damier);
            grille = j.fonctionnement(grille);
            damier = Passage.Trans_cel_int(grille);
            s.SauvegarderEtat(damier);
        }
        if (damier == c.charg("/home/oussama-hamar/Documents/POO/Projet_Bloc_2_POO/test_unit_r_0.csv")){
            return 1;
        }
        else{
            return 0;
        }
    }
    if (choix == 1){
        jdv::Sauvegarde s = jdv::Sauvegarde("test_u", "/home/oussama-hamar/Documents/POO/Projet_Bloc_2_POO/");
        vector<vector<int>> damier = c.charg("/home/oussama-hamar/Documents/POO/Projet_Bloc_2_POO/test_unit_1.csv");
        for (int i = 0; i < 3; i++){
            jdv::Grille grille = Passage.Trans_int_cel(damier);
            grille = j.fonctionnement(grille);
            damier = Passage.Trans_cel_int(grille);
            s.SauvegarderEtat(damier);
        }
        if (damier == c.charg("/home/oussama-hamar/Documents/POO/Projet_Bloc_2_POO/test_unit_r_1.csv")){
            return 1;
        }
        else{
            return 0;
        }
    }
    if (choix == 2){
        jdv::Sauvegarde s = jdv::Sauvegarde("test_u", "/home/oussama-hamar/Documents/POO/Projet_Bloc_2_POO/");
        vector<vector<int>> damier = c.charg("/home/oussama-hamar/Documents/POO/Projet_Bloc_2_POO/test_unit_2.csv");
        for (int i = 0; i < 3; i++){
            jdv::Grille grille = Passage.Trans_int_cel(damier);
            grille = j.fonctionnement(grille);
            damier = Passage.Trans_cel_int(grille);
            s.SauvegarderEtat(damier);
        }
        if (damier == c.charg("/home/oussama-hamar/Documents/POO/Projet_Bloc_2_POO/test_unit_r_2.csv")){
            return 1;
        }
        else{
            return 0;
        }
    }
    return 0;
}

int main(){
    jdv::Chargement Charg;
    string mode;
    int it;
    string nom;
    bool demande;
    std::cout << "Voulez-vous utiliser le jeu de la vie 0 ou le tester avec les tests unitaires 1" << std::endl;
    std::cin >> demande;
    if (demande == 0){
        std::cout << "Quel mode voulez-vous ? Sauvegarde ou Affichage" << std::endl;
        std::cin >> mode;
        std::cout << "Combien d'itération ?" << std::endl;
        std::cin >> it;
        if (mode == "Sauvegarde" || mode == "sauvegarde") {
            std::cout << "Entrez le nom du fichier de sortie:" << std::endl;
            std::cin >> nom;
        } else {
            nom = "Display";
        }
        vector<vector<int>> fichier_base = Charg.charg("/home/oussama-hamar/Documents/POO/Projet_Bloc_2_POO/test.csv");
        jdv::App App;
        App.Choix_Etat(mode, it, "/home/oussama-hamar/Documents/POO/Projet_Bloc_2_POO/test.csv", nom);
    }
    if (demande == 1){
        int test;
        std::cout << "Quel test voulez-vous effectuer? 0, 1 ,2" << std::endl;
        std::cin >> test;
        bool reponse = Test_Unitaire(test);
        std::cout << reponse << std::endl;
    }
}


   
