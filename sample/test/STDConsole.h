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
    bool pool();


    // Implement the renderer
    void render();
};

#endif //SAMPLE_STDCONSOLE_H
