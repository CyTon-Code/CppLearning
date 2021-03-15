//
// Created by cyton_code on 13.03.2021.
//

#ifndef CPP_LEARNING_ECHO_H
#define CPP_LEARNING_ECHO_H

#include "../../syntax/str/str.h"
#include "../list/len/len_array.h"

int echo(int length, String args[]) {
    for (int index = 1; index < length; index++)
        printf("%s ", args[index++]);

    printf("\n");

    return 0;
}

int echo(int length, const int array[]) {
    // Теперь, когда весь массив отсортирован - выводим его на экран
    for (int index = 0; index < length; ++index)
        std::cout << array[index] << ' ';

    std::cout << std::endl;

    return 0;
}

int echo(const int array[]) {
    int length = len_array(array);

    for (int index = 0; index < length; index++) {
        cout << array[index] << " ";
    }
    cout << endl;

    return 0;
}

#endif //CPP_LEARNING_ECHO_H
