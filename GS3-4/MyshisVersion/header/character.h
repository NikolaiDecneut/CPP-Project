#pragma once

#include <tuple>
#include <string>
#include "Game.h"

namespace Player{
    class player{
        std::tuple <int, int> loc;
    public:
        std::string name;

        void updateLocation(int depth, int option);
    };
}