#include "header/Game.h"
#include "header/character.h"
#include <bits/stdc++.h>


int main(){
    //INIT

    Base::Color                 color;
    Base::Open                  cache;
    Player::player              player;
    Player::player              narrator;
    Player::player              sergent;

    narrator.color = 'b';
    sergent.color = 'r';

    player.updateLocation(0, 0);

    //Main menu
    using namespace Base;
    clearterm();
    consolePrintMSG("Welcome to your own adventure where you choose what happens", narrator.color);
    if(cache.exist()){
        consolePrintMSG("You have a profile available, use it? [y,n]", narrator.color);
        switch(get()[0]){
            case 'y':
                cache.getCache(player.playerInfo);
                break;
            default:
                consolePrintMSG("Ok deleting save....", narrator.color);
                remove("config/config.txt");
                break;
        }
    }
    consolePrintMSG("Enter your name:   ", narrator.color);
    
    std::get<2>(player.playerInfo) = get();
    clearterm();

    consolePrintMSG("Welcome to the game "+ std::get<2>(player.playerInfo) + "!", narrator.color);
    cache.doCache(player.playerInfo);

    return 0;
}