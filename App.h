#include <iostream>
#pragma once
#include <vector>
#include "Jeu.h"
#include "Transgrille.h"
#include "GUI.h"
#include "Sauvergarde.h"
#include "Chargement.h"

namespace jdv{
    class App{
        public:
            App();
            void Choix_Etat(string, int, string, string);
            ~App();
    }
}