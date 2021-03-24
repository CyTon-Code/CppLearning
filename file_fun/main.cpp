#include "libs/library.h"

// TODO ЗРОБИТИ ОБЬЕКТ ЯКИЙ МОЖЕ НАДАТИ ВОЗМОЖНОСТЬ ЧИТАТИ ФАЙЛ ПОВНІСТЬЮ
//  НО ОДНОВРЕНМЕННО МОШ ЛИШ ВАТЬ ЧИТАТИ А ВАТЬ ЗАПИСУВАТИ - ТОМУ БУДЕ ФЛАГ, ЯКИЙ ОБЬЕКТ НА ДАННИЙ МОМЕНТПРАЦЮЭ
//  ПО ССИЛЦЫ ПАТЧ
int main() {
    string path = "in.txt";
    File file;
    file.read(path);
    edit(path, "Hello, World!");
    edit(path, "Hello, World!");
    string a;
    a = read(path, a);
    cout << a;
    a = read(path, a);
    cout << a;
    edit(path, a);
    return 0;
}
