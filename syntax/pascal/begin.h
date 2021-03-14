//
// Created by cyton code on 13.03.2021.
//

#ifndef CPPLEARNING_BEGIN_H
#define CPPLEARNING_BEGIN_H
/**
 * count - схож на start - счотчик.
<BR>
 * start - начало цикла и сопровождение цикла.
<BR>
 * stop - число шагов на которых заканчивается цикл.
<BR>
 * step - шаг в чтении итерацийным циклом.
<BR>
 * process - результат выполнения програаммы*/
#define BEGIN(name) int count = 0, start = 0, stop = 0, step = 1, process = 0; str NAME = # name

#define MAIN int main(int argc, char *args[])

#define END cout << "[" << NAME << " Finished]" << endl; return process

#endif //CPPLEARNING_BEGIN_H
