/* Copyright 2016 Gustavo Muñoz */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// int, double, char, string, bool

inline string keepWindowOpened() {
  string ch;
  cin >> ch;
  return ch;
}

int main() {
  char q = 'M';
  double pepe = sqrt(3.4);
  string result;

  cout << "Hello World!" << endl;
  cout << q << pepe << endl;
  result = keepWindowOpened();
  cout << "Hello " << result << "!" << endl;

  return 0;
}
