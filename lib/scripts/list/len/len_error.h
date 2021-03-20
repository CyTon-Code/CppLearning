//
// Created by cyton_code on 16.03.2021.
//

#ifndef CPP_LEARNING_LEN_ERROR_H
#define CPP_LEARNING_LEN_ERROR_H

/*TODO этот код не работает
 * моя  теория: ошибка не значительна и не ловится, роэтому цикл не завершался.
 * изза чего не было сделан счет елементов массивов, да и функция запросто
 * моглаа перезаписать запрещающие чужие ячейки памяти.
*/

//template<class Number>
int len_error(int value[], int tmp_length) {
    try { value[tmp_length] = 01; }
    catch (...) {
        cout << "value[tmp_length]" << endl;
    }
    value[tmp_length - 1] = 01;
    cout << "this err code, but not except";
    int count = 0;
//    while (true) {
//
//        try {
//            value[count] = value[count];
//        } catch (...) {
//            return count;
//        }
//
//        count++;
//    }
    return count;
}

#endif //CPP_LEARNING_LEN_ERROR_H
