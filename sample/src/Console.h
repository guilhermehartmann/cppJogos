#ifndef SAMPLE_CONSOLE_H
#define SAMPLE_CONSOLE_H

#include <string>
#include <vector>
#include <functional>
#include <map>

// Console Class to be extended with the rendering functionality added from outside
class Console {
public:
    typedef std::function<bool(std::vector<std::string>&)> command_t;

    bool run();

    void addCommand(std::string command, command_t fun)
    {
        mCommandMap[command] = fun;
    }

protected:
    std::vector<std::string> mHistory;
    std::string mInputLine;
    std::map<std::string, command_t> mCommandMap;
};


#endif //SAMPLE_CONSOLE_H
