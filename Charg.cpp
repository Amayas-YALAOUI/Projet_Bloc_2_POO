#include "Charg.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <filesystem>
#include "Etat.h"

using namespace std;

namespace jdv {

    Chargement::Chargement() {
        chemin = "";
    }

    Chargement::Chargement(string chemin) {
        this->chemin = chemin;
    }

    vector<vector<int>> Chargement::charg(string chemin) {

        ifstream fichier(chemin);

        if (!fichier.is_open()) {
            cout << "Erreur chargement fichier" << endl;
        }
        vector<vector<int>> grille;
        string ligneTexte;
        
        while (getline(fichier, ligneTexte)) {
            vector<int> ligneInt;
            string valeur = "";

            for (char c : ligneTexte) {
                if (c == ',' || c == ';') {
                    if (!valeur.empty()) {
                        ligneInt.push_back(valeur == "1");
                        valeur = "";
                    }
                } else if (c != ' ' && c != '\r') {
                    valeur += c;
                }
            }

            if (!valeur.empty()) {
                ligneInt.push_back(valeur == "1");
            }

            grille.push_back(ligneInt);
        }

        fichier.close();
        return grille;
    }

    Chargement::~Chargement() {}

}
