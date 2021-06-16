// --------- DON'T TOUCH --------
#include "global.h"
#ifdef RUN_TEST
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#else
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
// ------------------------------
#include <iostream>
using namespace std;

int main() {
    cout << "Hola Mundo!!\n";
    return 0;
}
#endif