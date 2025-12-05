#include "Sauv.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <filesystem>
#include "Etat.h"

using namespace std;

namespace jdv {

    Sauvegarde::Sauvegarde() {
        nom = "";
        chemin = "";
    }

    Sauvegarde::Sauvegarde(string nom, string chemin) {
        this->nom = nom;
        this->chemin = chemin;
    }


    void Sauvegarde::SauvegarderEtat(vector<vector<int>> grille) {
        Etat s;
        string nom_fichier = nom;
        if (nom_fichier.empty()) {
            cout << "Entrez nom fichier : ";
            cin >> nom_fichier;
        }
        ofstream sauvegarde(nom_fichier + "_" + to_string(s.getCPT()));

        if (!sauvegarde.is_open()) {
            cerr << "Erreur ouverture fichier" << endl;
        }

        for (const auto &ligne : grille) {
            for (size_t i = 0; i < ligne.size(); ++i) {
                sauvegarde << ligne[i];
                if (i < ligne.size() - 1) {
                    sauvegarde << ",";
                }

            }
            sauvegarde << "\n";
        }

        sauvegarde.close();
        s.incrementCPT();
    }

    Sauvegarde::~Sauvegarde() {}
}
