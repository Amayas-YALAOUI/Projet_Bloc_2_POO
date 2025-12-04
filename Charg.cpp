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

    vector<vector<bool>> Chargement::charg(string) {
        cout << "Entrez chemin d'accès :" << endl;
        cin >> chemin;

        ifstream fichier(chemin);

        if (!fichier.is_open()) {
            cout << "Erreur chargement fichier" << endl;
        }

        vector<vector<bool>> grille;
        string ligneTexte;
        
        while (getline(fichier, ligneTexte)) {
            vector<bool> ligneBool;
            string valeur = "";

            for (char c : ligneTexte) {
                if (c == ',') {
                    ligneBool.push_back(valeur == "1");
                    valeur = "";
                } else {
                    valeur += c;
                }
            }

            if (!valeur.empty()) {
                ligneBool.push_back(valeur == "1");
            }

            grille.push_back(ligneBool);
        }

        fichier.close();
        return grille;
    }

    Chargement::~Chargement() {}

}
