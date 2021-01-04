#include "header/character.h"
std::tuple<int, int> Player::player::updateLocation(int depth, int option){
    Player::player::loc = std::make_tuple(depth, option);
}