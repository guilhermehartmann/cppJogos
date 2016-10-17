#include "Console.h"

namespace {
    std::vector<std::string> split(const std::string &s, char delim=' ') {
        auto end = s.cend();
        auto start = end;

        std::vector<std::string> v;
        for( auto it = s.cbegin(); it != end; ++it ) {
            if( *it != delim ) {
                if( start == end )
                    start = it;
                continue;
            }
            if( start != end ) {
                v.emplace_back(start, it);
                start = end;
            }
        }
        if( start != end )
            v.emplace_back(start, end);
        return v;
    }
}

bool Console::run() {
    auto tokens = split(mInputLine);
    auto cmd = mCommandMap[tokens[0]];
    if(cmd)
    {
        return cmd (tokens);
    }
    return true;
}
