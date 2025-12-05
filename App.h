#include <iostream>
#pragma once
#include <vector>
#include "Jeu.h"
#include "TransGrille.h"
#include "GUI.h"
#include "Sauv.h"
#include "Charg.h"

namespace jdv{
    class App{
        public:
            App();
            void Choix_Etat(string, int, string, string);
            ~App();
    };
}