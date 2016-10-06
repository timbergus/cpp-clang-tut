/* Copyright 2016 Gustavo Muñoz */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

inline char keepWindowOpened() {
  char ch;
  cin >> ch;
  return ch;
}

int main() {
  char q = 'M';
  double pepe = 3.4;
  char result;
  cout << "Hello World!" << endl;
  cout << q << pepe << endl;
  result = keepWindowOpened();
  return result;
}
