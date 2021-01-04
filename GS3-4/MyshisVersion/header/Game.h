#pragma once

#include <iostream>
#include <string>
#include <map>
#include "Color.h"
namespace Base{
    std::string get();
    void clearterm();
    void consolePrintMSG(std::string message, char clr);
    class Open{
        std::fstream& goToLine(std::fstream& file, unsigned int num);
    public:
        int getCache(std::tuple<int, int, std::string>& loc);
        void doCache(std::tuple<int, int, std::string> loc);
        bool exist();
    };

    enum class States{NEW_GAME = 'N', QUIT = 'q'};
    class Color{
    public:
        std::string colorStr(std::string str, char color);
    };
};
