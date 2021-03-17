//
// Created by cyton_code on 17.03.2021.
//

#ifndef CPP_LEARNING_LIST_H
#define CPP_LEARNING_LIST_H

#include "../../syntax/python.h"

class List {
private:
    int length = 0, // stop
    start = 0, // start
    step = 1; // step
    int *array{};
public:
    List() {
        cout << "create Len";
    }

    ~List() {
        cout << "delete Len";
    }

    int get_length();
//    int get_length() {
//        return length;
//    }

    int *get_array();
//    int *get_array() {
//        return array;
//    }

    void set_length(int value);
//    void set_length(int value) {
//        length = value;
//    }

    void set_array(int value[]);
//    void set_array(int value[]){
//        array = value;
//    }

    void print_var();
//    void print_var() {
//        cout << length << ' ' << start << ' ' << step;
//    }

    void echo();
//    void echo() {
//        COUNT(length)cout << array[i];
//    }

    void sort();
//    void sort() {
//    }

    int search();
//    int search() {
//        return 0;
//    }

    int len();
//    int len() {
//        return 0;
//    }
};


#endif //CPP_LEARNING_LIST_H
