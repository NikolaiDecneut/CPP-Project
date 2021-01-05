#pragma once

#include <iostream>
#include <string>
#include <map>
#include "Color.h"
namespace Base{
    int get();
    std::string getStr();
    void clearterm();
    void consolePrintMSG(std::string message, char clr);
    class Open{
        std::fstream& goToLine(std::fstream& file, unsigned int num);
    public:
        int getCache(std::tuple<int, int, std::string>& loc);
        void doCache(std::tuple<int, int, std::string> loc);
        bool exist();
    };
    void gameOver();
    void pause(int milliseconds);
    enum Commands{NEW_GAME = 'N', QUIT = 'q'};
    class Color{
    public:
        std::string colorStr(std::string str, char color);
    };

};
