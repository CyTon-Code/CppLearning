#include "libs/library.h"

// TODO ЗРОБИТИ ОБЬЕКТ ЯКИЙ МОЖЕ НАДАТИ ВОЗМОЖНОСТЬ ЧИТАТИ ФАЙЛ ПОВНІСТЬЮ
//  НО ОДНОВРЕНМЕННО МОШ ЛИШ ВАТЬ ЧИТАТИ А ВАТЬ ЗАПИСУВАТИ - ТОМУ БУДЕ ФЛАГ, ЯКИЙ ОБЬЕКТ НА ДАННИЙ МОМЕНТПРАЦЮЭ
//  ПО ССИЛЦЫ ПАТЧ
int main() {
    string path = "in.txt";
    FileRead file;
    file.open(path);
    cout << file.read(path) << endl;
//    edit(path, "Hello, World!");
//    edit(path, "Hello, World!");
    string a;
    a = file.read(path, a);
    cout << a << endl;
    a = file.read(path, a);
    cout << a << endl;
//    edit(path, a);
    return 0;
}
