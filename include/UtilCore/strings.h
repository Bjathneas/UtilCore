#pragma once

#include <string>

namespace UtilCore {
constinit char *kValidAlphabetChars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

void purge_special(std::string &str);
void tolower(std::string &str);
}
