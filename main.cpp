#include <iostream>
#include <fstream>

// кодировка файла або программы
// можливо ентер або ыншы символи мышают
// можливо тупо не можу создати массив обьектів
// також треба дызнатися насчот типів.


using namespace std;
///run/media/cytoncode/GIT/CppLearning/data_in.txt
ofstream fout("/run/media/cytoncode/GIT/CppLearning/data_out.txt");
ifstream fin("/run/media/cytoncode/GIT/CppLearning/data_in.txt");

struct AVIA {
    int number_flight;
    char *city;
    char *type_of_plane;
};

int main() {
    // чувак создав количество елементу:
    int length;// = 10;
    fin >> length;
    cout << length << endl;
    AVIA array_flight[length];   // = // не работает
    cout << "s";
//            {
//            {"uzhorod", 5,  "boeing"},
//            {"uzhorod", 4,  "airbus"},
//            {"uzhorod", 2,  "boeing"},
//            {"uzhorod", 1,  "Concorde"},
//            {"uzhorod", 3,  "Fighter"},
//            {"uzhorod", 7,  "Jets"},
//            {"uzhorod", 8,  "Piper"},
//            {"uzhorod", 6,  "Pilatus"},
//            {"uzhorod", 10, "Robinson"},
//            {"uzhorod", 9,  "Cessna Caravan"}
//    };

//    for (int i = 0; i < length; i++) {
//        array_flight[i] = AVIA();
//    }


    for (int i = 0; i < length; i++) {
        fin >> array_flight[i].city;
        cout << array_flight[i].city << " ";
        fin >> array_flight[i].number_flight;
        cout << array_flight[i].number_flight << " ";
        fin >> array_flight[i].type_of_plane;
        cout << array_flight[i].type_of_plane << endl;
    }

    // остортировано?:
    int if_array_sort;


    // процес сортировака массива:

    // быгати до тех поор пока не отсорттерован масив
    do {
        if_array_sort = 0; //  массив отсортерован

        // читаю массив - быгаю по массиві:
        for (int i = 0; i < length; i++) {
            if (array_flight[i].number_flight > array_flight[i + 1].number_flight) {
                // мыняю предедущий зы слудующим елменти в масивы:
                AVIA buf;

                buf.type_of_plane = array_flight[i].type_of_plane;

                buf.city = array_flight[i].city;
                buf.number_flight = array_flight[i].number_flight;

                array_flight[i].city = array_flight[i + 1].city;
                array_flight[i].number_flight = array_flight[i + 1].number_flight;
                array_flight[i].type_of_plane = array_flight[i + 1].type_of_plane;

                array_flight[i + 1].city = buf.city;
                array_flight[i + 1].number_flight = buf.number_flight;
                array_flight[i + 1].type_of_plane = buf.type_of_plane;

                if_array_sort++; // массив не отсо=трерован
            }
        }
        // якщо массив отсортирован я виходжу, інакше біжу далі по коду
    } while (if_array_sort > 0);
    fout << length << endl;
    for (int i = 0; i < length; i++) {
        fout << array_flight[i].city << " ";
        fout << array_flight[i].number_flight << " ";
        fout << array_flight[i].type_of_plane << endl;
    }
}
/*
    for (int i = 0; i < length; i++)
        cout << array_flight[i].city << " " << array_flight[i].number_flight <<
             " " << array_flight[i].type_of_plane << endl;
fopen fout;
#include <iostream>
using namespace std;
struct AVIA {
	string city;
	int number_flight;
	string type_of_plane;
};
int main()
{
	AVIA array_flight[] = { {
	 "uzhorod", 5, "boing"}
	};
}
*/

/*


#include <iostream>

using namespace std;

int main() {
    // масив создаю:
    int array[] = {0, 2, 1, 0, 16, 0, 5, -2, 3, 13, -1};
    // чувак создав количество елементу:
    int length = 10;
    // остортировано?:
    int if_array_sort;

    // процес сортировака массива:

    // быгати до тех поор пока не отсорттерован масив
    do {
        if_array_sort = 0; //  массив отсортерован

        // читаю массив - быгаю по массиві:
        for (int i = 0; i < length; i++) {
            // Если предедущий елемент больше следующего{
            if (array[i] > array[i + 1]) {
                // мыняю предедущий зы слудующим елменти в масивы:
                int buf = array[i];
                array[i] = array[i + 1];
                array[i + 1] = buf;

                if_array_sort++; // массив не отсо=трерован
            }
        }
        // якщо массив отсортирован я виходжу, інакше біжу далі по коду
    } while (if_array_sort > 0);




    // вивод массива на екран:
    for (int i = 0; i <= length; i++)
        cout << array[i] << ' ';
    cout << endl;

    // завершаюсь успешно:
    return 0;
}
*/
/*

//
// Created by cyton_code on 15.03.2021.
//
#include "plugin.h"

//#include "temp/3.h"
//#include "lib/scripts/list/len/len.h"
#include "lib/syntax/python.h"
#include "lib/syntax/pascal.h"

template<typename T, size_t n>
inline size_t array_size(const T (&arr)[n]) {
    return n;
}

MAIN {

    int array[] = {6, 30, 50, 20, 10, 40};
    int length = array_size(array);
    cout << length << endl;
//    BEGIN;
//    start = 2, stop = 0;
//    E(start, stop)if (i % 10000000 == 0)cout << i << ' ';

//    int array[] = {6, 30, 50, 20, 10, 40};
//    len_ints(array, len(array), "array");
//    END;
}
*/
