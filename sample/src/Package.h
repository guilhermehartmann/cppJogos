#ifndef SAMPLE_PACKAGE_H
#define SAMPLE_PACKAGE_H

#include <map>
#include <string>

struct Package {

    struct Node{
        // Future Variant ?
        std::map<std::string,Node> mNode;
        std::string mData;
    };

    Node mRoot;
};


#endif //SAMPLE_PACKAGE_H
