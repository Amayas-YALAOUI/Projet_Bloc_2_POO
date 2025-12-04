#pragma once
#include <iostream>

using namespace std;

namespace jdv {
    class Etat {
        public :
            Etat();
            ~Etat();
            int getCPT();
            
        private :
            static int cpt;
            string chemin;

};
}