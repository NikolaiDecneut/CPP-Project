#include "header/character.h"
#include "header/Game.h"
void Player::player::updateLocation(int depth, int option){
    Base::Open cache;
    cache.getCache(playerInfo);
    std::get<0>(playerInfo) = depth;
    std::get<1>(playerInfo) = option;
    cache.doCache(playerInfo);
}