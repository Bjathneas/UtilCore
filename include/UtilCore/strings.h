#pragma once

#include <string>

namespace UtilCore {
constexpr std::string kValidAlphabetChars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

void purge_special(std::string &str);
void tolower(std::string &str);
}
