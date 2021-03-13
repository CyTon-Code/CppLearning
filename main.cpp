#ifndef main_cpp
#define main_cpp

#include "plugin.h"
#include "syntax/pascal.h"
#include "syntax/python.h"

#endif // main_cpp

BEGIN {
//    int count;
    int list[10] = {1, 2, 3, 4, 1, 5, 2, 4234, 2, 1};
    FOR_COUNT(argc, args, i, count) {
        cout << i << " " << count << endl;
    }
    FOR_COUNT(10, list, i, count) {
        cout << i << " " << count << endl;
    }
    FOR i IN (list) {
        cout << i;
    }
    std::cout << "Hello, World!" << std::endl;
    END
}