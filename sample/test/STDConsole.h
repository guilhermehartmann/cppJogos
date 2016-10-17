//
// Created by guilherme on 17/10/16.
//

#ifndef SAMPLE_STDCONSOLE_H
#define SAMPLE_STDCONSOLE_H

#include "../src/Console.h"

#include <iostream>

class STDConsole : public Console {
public:
    // Read Keyboard - no standard way to read key presses
    bool pool()
    {
        std::getline (std::cin,mInputLine);

        mHistory.push_back("> " + mInputLine);

        if ( mInputLine == "quit" )
        {
            return false;
        }

        return true;
    }

    // Implement the renderer
    void render()
    {
        std::cout << "-------------------------" << std::endl;

        for (auto& line : mHistory) {
            std::cout << line << std::endl;
        }

        std::cout << mInputLine << std::endl;
    }

};

#endif //SAMPLE_STDCONSOLE_H
