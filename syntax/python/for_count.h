//
// Created by cytoncode on 13.03.2021.
//

#ifndef CPPLEARNING_FOR_COUNT_H
#define CPPLEARNING_FOR_COUNT_H

// если итератор  создан удалить.
#define FOR_COUNT(n, list, i, count) count = 0;  \
for (auto i = list[0]; count < n; count++, i = list[count])


#endif //CPPLEARNING_FOR_COUNT_H
