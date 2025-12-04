#pragma once
#include <iostream>
#include "Cellule.h"

using namespace std;

namespace jdv {
    class Regle {
        public :
            Regle();
            ~Regle();
            int getVal1();
            int setVal1(int);
            int getVal2();
            int setVal2(int);
            virtual bool jugement(Cellule*, int, int);
        private :
            int val1;
            int val2;


};
}