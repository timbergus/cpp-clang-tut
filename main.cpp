/* Copyright 2016 Gustavo Muñoz */

#include "std_lib_facilities.hpp"

int main() {
  char q = 'M';
  double pepe = sqrt(3.4);
  string result;

  cout << "Hello World!" << endl;
  cout << "Hello, programming!" << endl;
  cout << "Here we go!" << endl;
  cout << q << pepe << endl;
  result = keep_window_open();
  cout << "Hello " << result << "!" << endl;

  return 0;
}
