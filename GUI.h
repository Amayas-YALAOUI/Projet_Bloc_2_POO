#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <ctime>
#include <cstdlib>

namespace jdv{

class GUI{
    public:
        GUI(int, int);
        void Afficher(Grille*, sf::RenderWindow &window);
        ~GUI();
    private:
        int x;
        int y;
        const int cellSize = 10;
};
}