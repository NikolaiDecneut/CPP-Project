#include "header/Game.h"
#include "header/character.h"
#include <bits/stdc++.h>


int main(){
    //INIT
    std::map<std::string, std::string> action =
    {
        {"punched", "*you got punched and knocked out*"},
        {"shot", "*You ran and got shot*\n GAME OVER."}
    };

    Base::Color                 color;
    Base::Open                  cache;
    Player::player              player;
    Player::player              narrator;
    Player::player              sergent;
    Player::player              patrol;

    player.color = 'b';
    narrator.color = 'w';
    sergent.color = 'r';
    patrol.color = 'c';

    //Main menu
    using namespace Base;
    clearterm();

    bool loadedFile = false;

    consolePrintMSG("Welcome to your own adventure where you choose what happens", narrator.color);
    if(cache.exist()){
        consolePrintMSG("You have a profile available, use it? [y,n]", narrator.color);
        switch(getStr()[0]){
            case 'y':
                if (cache.getCache(player.playerInfo) == 0){
                    loadedFile = true;
                }
                break;
            default:
                consolePrintMSG("Ok deleting save....", narrator.color);
                remove("saves/save.txt");
                break;
        }
    }
    if(!loadedFile){
        consolePrintMSG("Enter your name:   ", narrator.color);
        std::get<2>(player.playerInfo) = getStr();
        std::get<1>(player.playerInfo) = 1;
    }
    clearterm();

    consolePrintMSG("Welcome to the game "+ std::get<2>(player.playerInfo) + "!", narrator.color);
    cache.doCache(player.playerInfo);
    int depth = std::get<0>(player.playerInfo);
    int choice = std::get<1>(player.playerInfo);
    if (depth >= 0){
        if(depth == 0){
            consolePrintMSG("Welcome to seattle here we live among the few that survived the missle strike, the survivers are in hiding or are serving criminal enterprises for food, shelter and safety.", narrator.color);
            pause(2000);
            clearterm();
            consolePrintMSG("Welcome to seattle A.K.A the lost city, here you will-", narrator.color);
            consolePrintMSG("HEY, private wake up! No sleeping on guard duty or ill report you to the master.", sergent.color);
            consolePrintMSG("Possible responses: \n 1.Yes sir, sorry sir!\n 2.Screw off.\n 3.Don't say anything.\n", narrator.color);
            int select = get();
            switch(select){
                case 1:
                    choice *= select;
                   	consolePrintMSG("Yeah thats what I thought.", sergent.color);
	                break;
                case 2:
                    choice *= select;
                    consolePrintMSG("What did you say private?", sergent.color);
                    pause(500);
                    consolePrintMSG("I said screw off sir.", player.color);
                    pause(500);
                    consolePrintMSG(action.find("punched")->second, narrator.color);
                    break;
                case 3:
                    choice *=select;
                    consolePrintMSG("Answer me PRIVATE!", sergent.color);
                    break;
            }            
            player.updateLocation(++depth, choice);
        }
        if(depth == 1)
        {
            switch(choice){
                case 1:
                    choice *= 1;
                    consolePrintMSG("Yeah that's what I thought magot", sergent.color);
                    break;
                case 2:
                    choice *= 2;
                        consolePrintMSG("*you wake up 30 minutes later with a bad headache and notice that a patrol is heading you way for a checkin.*", narrator.color);
                        pause(1000);
                        consolePrintMSG("Oh no, what am i gonna say when the patrol asks why i didnt checkin. Let me go and speak with them and try to get out of this.", player.color);
                        pause(1000);
                        consolePrintMSG("*the patrol arrives at your position.*", narrator.color);
                        pause(1000);
                        consolePrintMSG("Hey private, why didnt you checkin with your report.", patrol.color);
                        pause(1000);                            
                        consolePrintMSG("You now have a choice do you snitch[1] on the sergeant or lie[2] for him?", narrator.color);
                        pause(1000);
                    break;
                case 3:
                    choice *= 3;
                    consolePrintMSG("Now you have a choice to make will you\n 1.Remain silent\n 2.Apologize\n", narrator.color);
                    switch(get()){
                        case 1:
                            consolePrintMSG(action.find("punched")->second, narrator.color);
                            consolePrintMSG("*you wake up 30 minutes later with a bad headache and notice that a patrol is heading you way for a checkin.*", narrator.color);
                            pause(3000);
                            consolePrintMSG("Oh no, what am i gonna say when the patrol asks why i didnt checkin. Let me go and speak with them and try to get out of this.", player.color);
                            pause(2000);
                            consolePrintMSG("*the patrol arrives at your position.*", narrator.color);
                            pause(1000);
                            consolePrintMSG("Hey private, why didnt you checkin with your report.", patrol.color);
                            pause(2000);                            
                            consolePrintMSG("You now have a choice do you snitch[1] on the sergeant or lie[2] for him?", narrator.color);
                            pause(2000);

                    }
            }
            player.updateLocation(++depth, choice);
        }
        if(depth == 2)
        {
            if(choice == 6 || choice == 9){
                switch(get()){
                    case 1:
                        choice *= 1;
                        consolePrintMSG("Okay, I'll talk to the sergeant about messing with the guards. Thank you private.", patrol.color);
                        break;
                    case 2:
                        choice *= 2;
                        consolePrintMSG("Thats it private your going to detention.", patrol.color);
                        break;
                }
            }
            else
            {
                /* Stuff for yeah thats what i thought */
            }
            ++depth;
        }
        if(depth == 3){
            if(choice == 6 || choice == 9){
                consolePrintMSG("Okay they are at a meeting now is a perfct time to run, do you?", narrator.color);
                consolePrintMSG("1.Run\n 2.Stay at your post.\n", narrator.color);
                switch(get()){
                    case 1:
                        consolePrintMSG(action.find("shot")->second, narrator.color);
                        break;
                    case 2:
                        consolePrintMSG("*They come back to you*", narrator.color);
                        pause(2000);
                        consolePrintMSG("Looks like its your unlucky day private, sergeant has friends in high places.", patrol.color);
                        pause(5000);
                        consolePrintMSG("He raises his gun in between your eyebrows...", narrator.color);
                        pause(2500);
                        consolePrintMSG("Please, we can ta-", player.color);
                        pause(2500);
                        gameOver();
                }
            }
            else{
                gameOver();
            }
        }

    }



    return 0;
}