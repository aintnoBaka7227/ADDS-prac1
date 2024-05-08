#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include <string>
#include <unordered_map>

class TrieNode {
    private:
    int routerNumber;
    std::unordered_map<char, TrieNode*> addresses;
    friend class PrefixMatcher;
    public:
    TrieNode();
};
class PrefixMatcher {
    private:
    TrieNode* root;
    public:
    PrefixMatcher();
    int selectRouter(std::string networkAddress);
    void insert(std::string address, int routerNumber);
};


#endif