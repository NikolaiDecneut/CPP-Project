#pragma once

#include <tuple>
#include <string>
#include "Game.h"

namespace Player{
    class player{
    public:
        char color = 'w';
        std::tuple <int, int, std::string> playerInfo;
        void updateLocation(int depth, int option);
    };
}