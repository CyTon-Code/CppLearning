#ifndef main_cpp
#define main_cpp

#include "plugin.h"
#include "string"
#include "list"
#include "syntax/pascal.h"
//#include "counter/len.h"
#include "syntax/python.h"
#include "syntax/python/for_count.h"

#endif // main_cpp

BEGIN {
    args;
//    FOR (i, args){}
    int list[10] = {1, 2, 3, 4, 1, 5, 2, 4234, 2, 1};
    int count;
    FOR_COUNT(argc, args, i, count) {
        cout << i << " " << count << endl;
    }
    FOR_COUNT(10, list, i, count) {
        cout << i << " " << count << endl;
    }
//    FOR i IN(args){
//        cout << i;
//    }
    std::cout << "Hello, World!" << std::endl;
    END
}