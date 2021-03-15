//
// Created by cyton_code on 15.03.2021.
//

#ifndef CPP_LEARNING_LEN_STR_H
#define CPP_LEARNING_LEN_STR_H

#include "../../syntax/python.h"

template<class str_type>
int len_str(str_type args) {
    int count = 0;
    FOR arg IN(args) {
        count++;
    }
    return count;
}

#endif //CPP_LEARNING_LEN_STR_H
