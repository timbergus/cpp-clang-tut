#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

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
