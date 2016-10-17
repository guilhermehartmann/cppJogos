#include <iostream>

#include "STDConsole.h"

int main() {
    STDConsole console;

    console.addCommand("quit", [](auto&,auto&){return false;});
    console.addCommand("test", [](auto& res, auto& options){ res.push_back("test"); return true;});

    while (console.pool())
    {
        console.render();
    }

    return 0;

}