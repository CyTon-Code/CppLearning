//
// Created by cytoncode on 13.03.2021.
//

#ifndef CPPLEARNING_FOR_COUNT_H
#define CPPLEARNING_FOR_COUNT_H
/**
 * args - массив.
 * arg - итератор.
 * n - количество элементов.
 * count - счетчик.
 * */
#define FOR_COUNT(n, list, i, count) count = 0;  \
for (auto i = list[0]; count < n; count++, i = list[count])

void print(int n, char **args) {
    int count;
    FOR_COUNT(n, args, arg, count) {
        cout << arg << " ";
    }
    cout << endl;
}

#endif //CPPLEARNING_FOR_COUNT_H
