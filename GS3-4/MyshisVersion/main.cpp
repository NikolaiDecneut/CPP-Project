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

    //Main menu
    using namespace Base;
    clearterm();
    consolePrintMSG("Welcome to your own adventure where you choose what happens", narrator.color);
    consolePrintMSG("Enter your name:   ", narrator.color);
    
    player.name = get();
    clearterm();

    consolePrintMSG("Welcome to the game "+ player.name + "!", narrator.color);

    return 0;
}