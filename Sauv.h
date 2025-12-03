#pragma once
#include <iostream>
#include "Etat.h"
#include <vector>

using namespace std;

namespace jdv {
    class Sauvegarde : public Etat {
    public:
        Sauvegarde();
        Sauvegarde(string, string);
        void SauvegarderEtat(vector<vector<int>>);
        ~Sauvegarde();

    private:
        string nom;
        string chemin;
    };
}
