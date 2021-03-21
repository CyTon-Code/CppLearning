#include <iostream>

using namespace std;

int main() {
    int const length = 4;
    int array[length][length] = {
            {6,  12, 6,  1},
            {4,  10, 5,  3},
            {2,  8,  9,  7},
            {14, 16, 11, 13}
    };
    int counter = 0;
    for (int i = 0; i < length; i++) {
        for (int z = 0; z < i; z++)
            //cout << array[z][i] << " "; cout << endl;
            if (array[z][i] > 0)counter++;
    }
    cout << counter;

// 2.
    int buf;
    int k;
    cout << "k=";
    cin >> k;
    //-->
    for (int i = 0; i < n; i++) // зсув масиву (4)
    {
        int *p = array[i], buf = *p;
        for (int j = 0; j < m; j++, p++) *p = *(p + 1);
        *(p - 1) = buf;
    }
    return 0;
}


///#include<iostream>
////#include<cstring> // strlen()
//using namespace std;
//
//#include "fstream"
//
//int len_string(const string &work) {
//    int count = 0;
//    for (auto i:work)count++;
//    return count;
//}
//
//class Airplane {
//public:
//    string destination;
//    int flight_number;
//    string type_of_plane;
//
//};
//
//template<typename str>
//bool work_equal(str work1, str work2) { // функция для сравнения двух слов:
//    if (len_string(work1) != len_string(work2)) // совпадают ли количества букв в словах:
//        return false; // не совпадают - слова не равны
//
//    // читаю слова и сравниваю побуквенно:
//    for (int i = 0; i < len_string(work1); i++) {
//        // совпадают ли буквы:
//        if (work1[i] != work2[i])
//            return false; // не совпадают - слова не равны
//    }
//    // если return был гдето испольлзован значит функция давно уже вышла
//    // из функции и вернула ложь, так как слова не равны.
//
//    // сюда мы дойдем только если все буквы равны и количество букв в
//    // словах совпадают.
//
//    return true; // количество букв совпало и буквы тоже - слова равны.
//}
//
//ifstream fin("in.txt");
//
//int main() {
//    const int airplane_length = 10;
////    Airplane a;
//
//    Airplane *hangar[airplane_length];
//    for (auto i:hangar) {
//        //i = hangar[i]
////        cout << i;
//        fin >> i->flight_number;
//        fin >> i->destination;
//        fin >> i->type_of_plane;
////        cout
//    }
//
//    for (auto & i : hangar) i;
//
////    Airplane hangar[airplane_length] = {
////            {"uzhorod",   5,  "boing"},
////            {"mukachevo", 6,  "airbus"},
////            {"solotvino", 2,  "Concorde"},
////            {"lviv",      1,  "Fighter"},
////            {"kyiv",      7,  "Jets"},
////            {"kharkiv",   9,  "Piper"},
////            {"odessa",    8,  "Pilatus"},
////            {"crimea",    3,  "Robinson"},
////            {"sevastopo", 4,  "Cessna "},
////            {"frankivsk", 10, "Caravan"}};
//    int k;
//    do {
//        k = 0;
//        for (int i = 0; i < airplane_length; i++)
//            if (hangar[i]->flight_number > hangar[i + 1]->flight_number) {
//                swap(hangar[i], hangar[i + 1]);
//                k++;
//            }
//    } while (k > 0);
//
//    // виводим на экран все самалеты:
//    for (auto &i : hangar)
//        cout << i->destination << " " << i->flight_number << " " << i->type_of_plane << " "
//             << endl;
//
//
//    // спрашваем нужный вам город:
//    string name_city;
//    cout << "your city=";
//    cin >> name_city;
//
//    // изначально мы не нашли ниодин город.
//    auto count = 0;
//
//    // ищем города и выводим к ним самалеты которые едут в указанный город:
//    for (auto &i : hangar) {
//        if (work_equal(name_city, i->destination)) {
//            count++; // +1 самалет который едет в указанный город.
//            cout << i->flight_number << " "
//                 << i->type_of_plane << endl; // выводим на экран этот самалет.
//        }
//
//    }
//
//    // если количество найденных самалетов равна 0, то скажем что самалетов мы не нашли.
//    if (count == 0)
//        cout << "none airplanes" << endl; // самалетов нужных нету.
//
//
//}