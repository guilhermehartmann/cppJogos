#include <iostream>

#include "STDConsole.h"

int main() {
    STDConsole console;

    while (console.pool())
    {
        console.render();
    }

    return 0;

}