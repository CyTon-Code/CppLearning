//
// Created by cyton_code on 13.03.2021.
//

#ifndef CPP_LEARNING_LEN_H
#define CPP_LEARNING_LEN_H

#include "len_new.h"
#include "len_char.h"
#include "len_str.h"
#include <utility>

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

/*
int len(str args) {
    printf("! len str\n");
    return len_str(args);
}
*/

#endif //CPP_LEARNING_LEN_H
