#include "UtilCore/strings.h"

#include <algorithm>
#include <sstream>

namespace UtilCore {
std::string kValidAlphabetChars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

void purge_special(std::string& str)
{
    str.erase(
        std::remove_if(str.begin(), str.end(), [](char c) { return kValidAlphabetChars.find(c) == std::string::npos; }),
        str.end());
}
void tolower(std::string& str)
{
    for (char& c : str) {
        c = std::tolower(c);
    }
}
void toupper(std::string& str)
{
    for (char& c : str) {
        c = std::toupper(c);
    }
}
std::vector<std::string> split(std::string str)
{
    std::vector<std::string> split_vec;
    std::stringstream ss(str);

    std::string str_split;

    while (ss >> str_split) {
        split_vec.push_back(str_split);
    }
    return split_vec;
}
}
