#include <iostream>

using namespace std;

class Data {
private:
    string first_name;
    unsigned int number_group;
    int *Uspishnist;// typ??? - массив оценок?
};

void interface();

void save_data(Data data);

Data read_data();


//int main(int argc, char **args) {
int main() {
    auto data = read_data();
    interface();
    save_data(data);
    return 0;
}

Data read_data() {
//    кодировка файлов: UTF-8 - если символы за пределом ASCII отсечь и на свалку.
    return data;
}

void save_data(auto data) {

}

void interface() {
    while (true) {
        break;//temporary
//        case: exit-break;
//        case: save_data();
//        case: read_data();
//        case: echo_data();
//        case: sort_data(); //сортировать_базу_по_номерам();
//        case: search_obj;
//        case: del obj;
//        case: add obj;
    }
}