//
// Created by cyton_code on 17.03.2021.
//

#ifndef CPP_LEARNING_LIST_H
#define CPP_LEARNING_LIST_H

#include "../../syntax/python.h"

class List {
private:
    List() {
        cout << "create Len";
    }

    ~List() {
        cout << "delete Len";
    }

    int length;
    int start = 0, step = 1;
    int *array;
public:
    int get_length() {
        return length;
    }

    int *get_array() {
        return array;
    }

    void set_length(int value) {
        length = value;
    }

    void set_array(int value[]) {
        array = value;
    }

    void print_var() {
        cout << length << ' ' << start << ' ' << step;
    }

    void echo() {
        COUNT(length)cout << array[i];
    }

    void sort() {
    }

    int search() {
        return 0;
    }

    int len() {
        return 0;
    }
};


#endif //CPP_LEARNING_LIST_H
