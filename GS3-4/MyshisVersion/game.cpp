#include "header/Game.h"
#include "header/Color.h"
#include <fstream>
#include <string>
#include <tuple>
template<class T>
auto Base::get(T value){
    return value;
}
void Base::clearterm(){
    for(int i = 0; i < 50; i++){
        std::cout << std::endl;
    }
}


void Base::Open::doCache(std::tuple<int, int> loc){
    std::ofstream log("log.msg");
    std::ofstream config("config/config.txt");
    if (std::get<0>(loc)){
        config << std::get<0>(loc) << " ";
        log << "Added loc<0> to config file";
    }
    if (std::get<1>(loc)){
        config << std::get<1>(loc);
        log << "Added loc<1> to config file";
    }
    config.close();
}
void Base::Open::getCache(std::tuple<int, int> &loc){
    std::ifstream config("config/config.txt");
    std::ofstream log("log.msg");
    std::string line;
    if (config.is_open())
    {
        while (getline(config,line))
        {
            log << line << ":  was read";
        }
        config.close();
    }
    std::string depthString;
    std::string choiceString;
    if(line != ""){
        char l = ' ';
        for(int i = 0; line.length(); i++){
            if(line[i]!= l){
                depthString.push_back(line[i]);
            }
            else{
                choiceString.push_back(line[i]);
            }
        }
        choiceString.erase(0);
    }
    loc=std::make_tuple(std::stoi(depthString), std::stoi(choiceString));
}
std::string Base::Color::colorStr(std::string str, char* color){
    switch(*color){
        case 'r':
            str.append(RST);
            str.insert(0, KRED);
            break;
        case 'b':
            str.append(RST);
            str.insert(0, KBLU);
            break;
        case 'w':
            str.append(RST);
            str.insert(0, KWHT);
            break;
        default:
            str.append(RST);
            str.insert(0, KWHT);
            break;
    }
    return str;
}

template<class T>
void Base::consoleMSG(T message, char clr)
{
    Base::Color color;
    std::cout << color.colorStr(message, clr) << std::endl;
}