#include "Finder.h"

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
    std::vector<int> result;
    int checking_index = 0;
    for (size_t i = 0; i <= s2.size(); i++) {
        size_t found = s1.find(s2.substr(0, i), checking_index);
    
        if (found != std::string::npos) {
            result.push_back(found);
            checking_index = found;
        }
        else {
            result.push_back(-1);
            break;
        }
    }
    return result;
}