//
// Created by cyton_code on 15.03.2021.
//

#ifndef CPP_LEARNING_ECHO_H
#define CPP_LEARNING_ECHO_H

void echo(int length, int array[]) {
    // Теперь, когда весь массив отсортирован - выводим его на экран
    for (int index = 0; index < length; ++index)
        std::cout << array[index] << ' ';
    std::cout << std::endl;
}

#endif //CPP_LEARNING_ECHO_H
