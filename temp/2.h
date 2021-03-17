//
// Created by cyton_code on 17.03.2021.
//

#ifndef CPP_LEARNING_2_H
#define CPP_LEARNING_2_H


struct List {
    int length = 0, // stop
    start = 0, // start
    step = 1; // step
    int *array;
    char *typ;
};

int len_ints(int *args, int length, const char typ[]) {
    List *obj = new List;
    obj->length = length;
    obj->array = args;

    for (int i = obj->start, n = obj->length; i < n; i += obj->step) {
        cout << obj->array[i] << ' ';
    }
    cout << endl;
    return obj->length;
}

#include "../lib/scripts/list/len/len.h"

#endif //CPP_LEARNING_2_H
