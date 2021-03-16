//
// Created by cyton_code on 13.03.2021.
//

#ifndef CPP_LEARNING_LEN_H
#define CPP_LEARNING_LEN_H

#include "len_new.h"
#include "len_char.h"
#include "len_str.h"
#include "len_search.h"
#include "len_array_first.h"

#include <utility>

#define LEN_SIZE(args, typ) sizeof(args)/sizeof(typ)

//len(type args)

int len(String args) {
    cout << "! len String" << endl;
    return len_char(args);
}

int len(string args) {
    cout << "! len string" << endl;
    return len_char(args);
}

int len(str args) {
    cout << "! len STR" << endl;
    return len_str(std::move(args));
}

int len(const int array[]) {
    cout << "! len int list" << endl;
    return len_array_first(array);
}

template<class typ>
int len(typ array[], typ end) {
    cout << "! len other_type" << endl;
    return len_search(array, end);
}

template<class typ_list, class typ>
int len(typ_list args, typ n) {
    return LEN_SIZE(args, typ);
}
/*
int len(str args) {
    printf("! len str\n");
    return len_str(args);
}
*/

#endif //CPP_LEARNING_LEN_H
