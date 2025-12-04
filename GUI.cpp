#include <iostream>
#include "GUI.h"

namespace jdv{

GUI::GUI(int x, int y){
    this->x = x;
    this->y = y;
}

void GUI::Afficher(std::vector<std::vector<int>>, sf::RenderWindow &window){
    sf::RenderWindow window(sf::VideoMode(x * cellSize, y * cellSize), "Game of Life");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        sf::RectangleShape cell(sf::Vector2f(cellSize - 1.0f, cellSize - 1.0f));
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                if (damier[i][j] == 1){
                    cell.setPosition(x * cellSize, y * cellSize);
                    window.draw(cell);
                }
            }
        }
        window.display();
        sf::sleep(sf::milliseconds(1000));
    }   
}
}
