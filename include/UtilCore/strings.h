#pragma once

#include <string>
#include <vector>

namespace UtilCore {
extern std::string kValidAlphabetChars;

void purge_special(std::string& str);
void tolower(std::string& str);
void toupper(std::string& str);
std::vector<std::string> split(std::string str);
}
