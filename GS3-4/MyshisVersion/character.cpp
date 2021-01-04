#include "header/character.h"
void Player::player::updateLocation(int depth, int option){
    std::get<0>(Player::player::playerInfo) = depth;
    std::get<1>(Player::player::playerInfo) = option;
}