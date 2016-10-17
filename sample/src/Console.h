#ifndef SAMPLE_CONSOLE_H
#define SAMPLE_CONSOLE_H

#include <string>
#include <vector>

// Console Class to be extended with the rendering functionality added from outside
class Console {
public:

private:
    std::vector<std::string> history;
    std::string console;
};


#endif //SAMPLE_CONSOLE_H
