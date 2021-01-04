#include <tuple>
#include <string>
#include "Game.h"
namespace Player{
    class player{
        std::tuple <int, int> loc;
    public:
        std::string name;

        std::tuple<int, int> updateLocation(int depth, int option);
    };
}