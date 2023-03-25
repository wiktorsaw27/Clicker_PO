#include "game_view.h"
#include <iostream>



game_view::game_view(game_model& model) : model(model)
{
}

void game_view::update()
{
    system("cls");
    std::cout << "Console clicker!" << std::endl;
    std::cout << "Points: " << this->model.get_points() << std::endl;
}


