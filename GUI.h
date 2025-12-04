#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Grille.h"

namespace jdv{

class GUI{
    public:
        GUI(int, int);
        void Afficher(std::vector<std::vector<int>>, sf::RenderWindow &window);
        ~GUI();
    private:
        int x;
        int y;
        const int cellSize = 10;
};
}