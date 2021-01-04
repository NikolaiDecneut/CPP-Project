#pragma once

#include <iostream>
#include <string>
#include <map>
#include "Color.h"
namespace Base{
    template<class T>
    auto get(T value);
    void clearterm();
    template<class T>
    void consolePrintMSG(T message, char clr);
    class Open{
    public:
        void getCache(std::tuple<int, int>& loc);
        void doCache(std::tuple<int, int> loc);
    };

    enum class States{NEW_GAME = 'N', QUIT = 'q'};
    class Color{
    public:
        std::string colorStr(std::string str, char* color);
    };
};
