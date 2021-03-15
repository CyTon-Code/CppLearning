//
// Created by cyton_code on 15.03.2021.
//

#ifndef CPP_LEARNING_SEARCH_H
#define CPP_LEARNING_SEARCH_H

int search_little_element(const int length, const int array[], int startIndex) {
    // В переменной smallestIndex хранится индекс наименьшего значения, которое мы нашли в этой итерации.
    // Начинаем с того, что наименьший элемент в этой итерации - это первый элемент (индекс 0)
    int smallestIndex = startIndex;

    // Затем ищем элемент поменьше в остальной части массива
    for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex) {
        // Если мы нашли элемент, который меньше нашего наименьшего элемента,
        if (array[currentIndex] < array[smallestIndex])
            // то запоминаем его
            smallestIndex = currentIndex;
    }
    return smallestIndex;
}

#endif //CPP_LEARNING_SEARCH_H
