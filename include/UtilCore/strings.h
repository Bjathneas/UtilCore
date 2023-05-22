#pragma once

#include <string>

namespace UtilCore {
extern std::string kValidAlphabetChars;

void purge_special(std::string &str);
void tolower(std::string &str);
}
