#include "std_lib_facilities.h"

int main() {

    //Using universal and uniform initialization (C++11 list notation)
    double x {2.7};
    int y {x};
    return 0;

    //Try to compile this and notice the error
    /*
    error: type 'double' cannot be narrowed to 'int' in initializer list [-Wc++11-narrowing]
    insert an explicit cast to silence this issue
    */

}
