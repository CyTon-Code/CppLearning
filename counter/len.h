//
// Created by cytoncode on 13.03.2021.
//

#ifndef CPPLEARNING_LEN_H
#define CPPLEARNING_LEN_H

int len(char *);

//len(type args)
int len(char *args) {
    int count = 0;
    for (auto i: args) {
        count++;
    }
    return count;
}

#endif //CPPLEARNING_LEN_H
