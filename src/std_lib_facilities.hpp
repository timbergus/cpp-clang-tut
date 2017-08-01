// Copyright 2016 Gustavo Muñoz

#ifndef SRC_STD_LIB_FACILITIES_HPP_
#define SRC_STD_LIB_FACILITIES_HPP_

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

inline string isMarried(bool married) {
  if (married) {
    return "It's ";
  }
  return "It's not ";
}

inline string keep_window_open() {
  string ch;
  cin >> ch;
  return ch;
}

#endif  // SRC_STD_LIB_FACILITIES_HPP_
