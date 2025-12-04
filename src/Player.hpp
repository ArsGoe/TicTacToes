#include <iostream>
#include <vector>
#pragma once

namespace Player{
    struct player
    {
        std::string name;
        char symbol;
    };

    player create_player();
}

