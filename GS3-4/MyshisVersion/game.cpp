#include "header/Game.h"
#include "header/Color.h"
#include <fstream>
#include <string>
#include <tuple>
#include <limits>
#include <chrono>
#include <thread>

int Base::get(){
    int value;
    std::cin >> value;
    return value;
}
std::string Base::getStr(){
    std::string value;
    std::cin >> value;
    return value;
}
void Base::clearterm(){
    for(int i = 0; i < 100; i++){
        std::cout << std::endl;
    }
}

bool Base::Open::exist(){
    std::ifstream file( "saves/save.txt", std::ios::binary | std::ios::ate);
    if (file.tellg() > 0){
        return true;
    }
    return false;
}
void Base::Open::doCache(std::tuple<int, int, std::string> loc){
    std::ofstream log("log.msg");
    std::ofstream config("saves/save.txt");

    config << std::get<0>(loc) << " ";
    log << "Added loc<0> to config file \n";
    
    config << std::get<1>(loc) << " ";
    log << "Added loc<1> to config file \n";

    config << std::get<2>(loc) << " ";
    log << "Added loc<2> to config file \n";

    config.close();
}
int Base::Open::getCache(std::tuple<int, int, std::string> &loc){
    std::string saveName = "saves/save.txt";
    std::ifstream save(saveName);
    std::ofstream log("log.msg");
    std::string line;    
    
    while(std::getline(save, line)){
        save.close();

        std::string depthString;
        std::string choiceString;
        std::string name;
        if(line != ""){
            char l = ' ';
            int i = 0;
            for(; line[i] != l; i++){
                depthString.push_back(line[i]);
            }
            i++;
            for(; line[i] != l; i++){
                choiceString.push_back(line[i]);
            }
            i++;
            for(; line[i] != l; i++){
                name.push_back(line[i]);
            }
        }
        loc = std::make_tuple(std::stoi(depthString), std::stoi(choiceString), name);
        return 0;
    }
    std::cout << "ERROR: Take a look at log.msg" << std::endl;
    log << "ERROR: could not see any lines in " << saveName;
    return -100;
}
std::fstream& Base::Open::goToLine(std::fstream& file, unsigned int num){
    file.seekg(std::ios::beg);
    for(int i=0; i < num - 1; ++i){
        file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    return file;
}
void Base::pause(int milliseconds= 1000){
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}
std::string Base::Color::colorStr(std::string str, char color){
    str.append(RST);
    switch(color){
        case 'r':
            str.insert(0, KRED);
            break;
        case 'b':
            str.insert(0, KBLU);
            break;
        case 'w':
            str.insert(0, KWHT);
            break;
        case 'g':
            str.insert(0, KGRN);
            break;
        case 'm':
            str.insert(0, KMAG);
            break;
        case 'y':
            str.insert(0, KYEL);
            break;
        case 'c':
            str.insert(0, KCYN);
            break;
        default:
            str.insert(0, KWHT);
            break;
    }
    return str;
}

void Base::consolePrintMSG(std::string message, char clr){
    Color color;
    std::cout << color.colorStr(message, clr) << std::endl;
}


