#include <iostream>

using namespace std;


//PATTERN: Описати структуру з іменем STUDENT, яка містить наступні поля:
class Student {
private:
    string first_name;// Прізвище і ініціали.
    int number_group;//2. Номер групи.
    int *success;//3. Успішність (масив із чотирьох елементів).
    int length_success;// кількість балів. - сигсесс.
    double appraisals; // середний бал.
public:
    void select_appraisals() { // Задать Середний_бал
        double sum = 0;
        for (int i = 0; i < this->length_success; i++) {
            sum += this->success[i];
        }
        this->appraisals = sum / this->length_success;
    }

// - чи є 4, та 5 - у мене в массивы ээ чотирка а вать пятки?
    bool get_excellent() {
        for (int i = 0; i < length_success; i++)
            if (success[i] == 4 or success[i] == 5)
                return true;
        return false;
    }

    void set_success_list(int *success) {
        this->success = success; //мои оценки
    }

    void set_length_success(int length_success) {
        this->length_success = length_success;//количество моиих оценок
    }

    Student() {
        select_appraisals(); // вищитать сренее арифметичное.
    }

    ~Student() {
        // TODO удалити всі ресурси.
    }

    int get_number_group() {
        return this->number_group;
    }

    string get_first_name() { // скажу свою фамилию:
        return this->first_name;
    }

    double get_appraisals() { // сказать свой средний бал - своих оценок.
        return this->appraisals;
    }

    int get_length_success() { // говорю сколько есть оценок.
        return this->length_success;
    }

};


class Data {
private:
    Student *Group;
    int length = 0;
public:
    /*
        Виведення на екран прізвищ і номерів груп для всіх студентів, включених
        в масив, які мають оцінки 4 і 5.
    */
    void print_group() {// ВИВОД ЛИШ ВІДМІННИНКУ
        int count = 0;
        for (int i = 0; i < this->length; i++)
            if (this->Group[i].get_excellent()) {// 4 , 5 якщо там такка э
                cout << this->Group[i].get_first_name() << ' '
                     << this->Group[i].get_number_group();
                count++;
            }
        if (0 == count)//3. Якщо таких студентів нема, то вивести відповідне
            // повідомлення.
            cout << "None student!";
        cout << endl;
    }

    //Написати програму, яка виконує наступні дії:
    //1. Впорядковує записи STUDENT по зростанню середнього балу:
    void sort_data() {
        // читаю массив студентыв
        for (int i = 0; i < this->length; i++) {
            // якщо номер настпуного студента меньше за предедущего, мыняю місяцями.
            if (this->Group[i].get_appraisals() > this->Group[i + 1].get_appraisals())
                swap(this->Group[i], this->Group[i + 1]);
        }

    }//сортировать_базу_по_номерам();

};




//void interface();

//void save_data(Student data);

//Student read_data();


//int main(int argc, char **args) {
int main() {
//    auto data = read_data();
//    interface();
//    save_data(data);
    return 0;
}

//Data read_data() {
//    Data data;
////    кодировка файлов: UTF-8 - если символы за пределом ASCII отсечь и на свалку.
//    return data;
//}

//void save_data(auto data) {
//
//}

void interface() {
    while (true) {
        // TODO
        break;//temporary
//        case: exit-break;
//        case: save_data();
//        case: read_data();
//        case: echo_data();
//        case: sort_data(); //сортировать_базу_по_номерам();
//        case: search_student;
//        case: del_student;
//        case: add_student;
    }
}


/**




*/