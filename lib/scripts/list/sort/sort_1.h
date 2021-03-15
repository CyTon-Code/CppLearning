//
// Created by cyton_code on 15.03.2021.
//

#ifndef CPP_LEARNING_SORT_1_H
#define CPP_LEARNING_SORT_1_H

#include <iostream>
#include <algorithm> // для std::swap. В C++11 используйте заголовок <utility>
#include "../search/search.h"

void sort(const int length, int array[]/* = {30, 50, 20, 10, 40}*/) {
    // Перебираем каждый элемент массива (кроме последнего, он уже будет отсортирован к тому времени, когда мы до него доберемся)
    for (int startIndex = 0; startIndex < length - 1; ++startIndex) {
        // Ищем индекс наименьшего елемента.
        int smallestIndex = search_little_element(length, array, startIndex);

        // smallestIndex теперь наименьший элемент.
        // Меняем местами наше начальное наименьшее число с тем, которое мы обнаружили
        std::swap(array[startIndex], array[smallestIndex]);
    }

    // Теперь, когда весь массив отсортирован - выводим его на экран
    for (int index = 0; index < length; ++index)
        std::cout << array[index] << ' ';
}

#endif //CPP_LEARNING_SORT_1_H
/*
#include <iostream>
#include <algorithm> // для std::sort()

int main()
{
	const int length = 5;
	int array[length] = { 30, 50, 20, 10, 40 };

	std::sort(array, array+length);

	for (int i=0; i < length; ++i)
		std::cout << array[i] << ' ';

	return 0;
}
 */