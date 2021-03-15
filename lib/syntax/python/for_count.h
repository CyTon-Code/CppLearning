//
// Created by cyton code on 13.03.2021.
//

#ifndef CPP_LEARNING_FOR_COUNT_H
#define CPP_LEARNING_FOR_COUNT_H
/**
 * args - массив.
 * arg - итератор.
 * n - количество элементов.
 * count - счетчик.
 * */
#define FOR_COUNT(list, i, start, stop, step) start=0;for (auto i = list[0]; \
start < stop; start+=step, i = list[start])

//int range[3]= {0, 0, 1};

void print(int n, char **args) {
    int start = 0, step = 0;
    FOR_COUNT(args, arg, start, n, step) {
        cout << arg << " ";
    }
    cout << endl;
}

#endif //CPP_LEARNING_FOR_COUNT_H
