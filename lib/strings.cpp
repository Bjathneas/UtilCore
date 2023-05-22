#include "UtilCore/strings.h"

#include <algorithm>

namespace UtilCore {
  void purge_special(std::string &str) {
    str.erase(std::remove_if(str.begin(), str.end(), [](char c){
      return kValidAlphabetChars.find(c) == std::string::npos;
    }), str.end());
  }
  void tolower(std::string &str) {
    for(char &c : str){
      c = std::tolower(c);
    }
  }
}
