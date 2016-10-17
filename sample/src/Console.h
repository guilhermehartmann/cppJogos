#ifndef SAMPLE_CONSOLE_H
#define SAMPLE_CONSOLE_H

#include <string>
#include <vector>
#include <functional>
#include <map>

// Console Class to be extended with the rendering functionality added from outside
class Console {
public:

protected:
    std::vector<std::string> mHistory;
    std::string mInputLine;
    std::map<std::string,std::function<bool(std::vector<std::string>&)>> mCommandMap;
};


#endif //SAMPLE_CONSOLE_H
