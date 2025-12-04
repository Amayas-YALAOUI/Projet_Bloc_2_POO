#pragma once
#include <iostream>
namespace jdv{
    class Cellule {
        public:
            void set_x(int);
            int get_x();
            void set_y(int);
            int get_y(); 
            Cellule(int,int);
            virtual ~Cellule() noexcept = default;
        private:
            int x;
            int y;
    };
}