/* Copyright 2016 Gustavo Muñoz */

#include <emscripten.h>
#include "std_lib_facilities.hpp"
#include "utils.hpp"

#ifdef __cplusplus
extern "C" {
#endif

double EMSCRIPTEN_KEEPALIVE add(double a, double b) {
  return(a + b);
}

// Called with:
// var add = Module.ccall('add', number, ['number', 'number'], [2, 3]);

#ifdef __cplusplus
}
#endif

int main() {
    cout << add(2, 3) << endl;
    working_with_vectors();
    return 0;
}
