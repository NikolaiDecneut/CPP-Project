#pragma once

#include <tuple>
#include <string>
#include "Game.h"

namespace Player{
    class player{
    public:
        bool death;
        char color;
        std::tuple <int, int, std::string> playerInfo;
        void updateLocation(int depth, int option);
    };
}