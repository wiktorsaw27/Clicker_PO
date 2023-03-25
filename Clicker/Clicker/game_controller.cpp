//
// Created by student on 17.03.2023.
//

#include "game_controller.h"

game_controller::game_controller(game_model& model, game_view& Aview) : model(model), view(Aview) {
}

void game_controller::launch() {
    view.update();

    int key;
    do {
        key = _getch();
        if (key == 13) {
            this->model.add_points(1);
            view.update();
        }

        if (model.get_points() >= 100)
            std::cout << "Rank: Master";
        else if(model.get_points()>=60)
            std::cout << "Rank: Platinium";
        else if (model.get_points() >= 30)
            std::cout << "Rank: Gold";
        else if (model.get_points() >= 10)
            std::cout << "Rank: Silver";
        else
        {
            std::cout << "Rank: Noob!";
        }
    } while (key != 27);
}

/*
void game_controller::update() {
    system("cls");
    std::cout << "Console clicker!" << std::endl;
    std::cout << "Points: " << this->model.get_points() << std::endl;
}
*/