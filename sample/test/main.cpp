#include <iostream>

#include "STDConsole.h"

int main() {
    STDConsole console;

    console.addCommand("quit", [](auto){return false;});

    while (console.pool())
    {
        console.render();
    }

    return 0;

}