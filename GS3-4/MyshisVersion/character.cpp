#include "header/character.h"
void Player::player::updateLocation(int depth, int option){
    Player::player::loc = std::make_tuple(depth, option);
}