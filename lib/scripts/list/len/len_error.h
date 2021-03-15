//
// Created by cyton_code on 16.03.2021.
//

#ifndef CPP_LEARNING_LEN_ERROR_H
#define CPP_LEARNING_LEN_ERROR_H

//template<class Number>
int len_error(int value[]) {
    int count = 0;
    while (true) {

        try {
            value[count] = 0;
        } catch (...) {
            return count;
        }

        count++;
    }
    return count;
}

#endif //CPP_LEARNING_LEN_ERROR_H
