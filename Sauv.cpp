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
        cout << "Entrez nom fichier : ";
        cin >> nom;
        Etat s;
        ofstream sauvegarde(nom + "_" + to_string(s.getCPT()));

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
    }

    Sauvegarde::~Sauvegarde() {}
}
