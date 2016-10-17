#include <iostream>

#include "STDConsole.h"

int main() {
    STDConsole console;

    console.addCommand("quit", [](auto){return false;});
    console.addCommand("test", [](auto& res){ res.push_back("test"); return true;});

    while (console.pool())
    {
        console.render();
    }

    return 0;

}