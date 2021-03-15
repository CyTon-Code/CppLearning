//
// Created by cyton_code on 16.03.2021.
//

#ifndef CPP_LEARNING_LEN_SEARCH_H
#define CPP_LEARNING_LEN_SEARCH_H

// в приницпе можно бежать вперед и проверять можно ли редактировать,
// перезаписывая те же значения в ту же ячейку, до момента ошибки.
template<class typ>
int len_search(typ array[], typ end) {
    int count = 0;
    while (count++ != end);
    return count;
}

#endif //CPP_LEARNING_LEN_SEARCH_H
