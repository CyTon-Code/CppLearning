//
// Created by cyton_code on 15.03.2021.
//
#include "plugin.h"

//#include "temp/3.h"
//#include "lib/scripts/list/len/len.h"
#include "lib/syntax/python.h"
#include "lib/syntax/pascal.h"

MAIN {
    BEGIN;
    start = 10000, stop = -1, step=-1;
    MATH_E(start, stop, step);
//    int array[] = {6, 30, 50, 20, 10, 40};
//    len_ints(array, len(array), "array");
    END;
}
