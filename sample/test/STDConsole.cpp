#include "STDConsole.h"

bool STDConsole::pool()
{
    std::getline (std::cin,mInputLine);

    mHistory.push_back("> " + mInputLine);

    return run();
}

void STDConsole::render()
{
    std::cout << "-------------------------" << std::endl;

    for (auto& line : mHistory) {
        std::cout << line << std::endl;
    }

    std::cout << mInputLine << std::endl;
}
