//
// Created by cyton_code on 13.03.2021.
//

#ifndef CPP_LEARNING_ECHO_H
#define CPP_LEARNING_ECHO_H

#include "../../syntax/str/str.h"

int echo(int n, String args[]) {
    int i = 1;

    while (i < n)
        printf("%s ", args[i++]);

    printf("\n");

    return 0;
}
#endif //CPP_LEARNING_ECHO_H
