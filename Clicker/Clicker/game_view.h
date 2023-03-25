#pragma once

#include "game_model.h"

class game_view {

public:

    explicit game_view(game_model& model);
    void update();
    //game_view();

private:

    game_model& model;

};