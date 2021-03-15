//
// Created by cyton_code on 15.03.2021.
//

#ifndef CPP_LEARNING_LEN_CHAR_H
#define CPP_LEARNING_LEN_CHAR_H


template<class string_type>
int len_char(string_type args) {
    int count = 0;
    while (args[count] != '\0') {
        count++;
    }
    return count;
}

#endif //CPP_LEARNING_LEN_CHAR_H
