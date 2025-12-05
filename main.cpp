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

int main(){
    jdv::Chargement Charg;
    string mode;
    int it;
    string nom;
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