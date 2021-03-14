#include "plugin.h"
#include "syntax/pascal.h"
#include "syntax/python.h"

MAIN {
    BEGIN(main);  // нужен для хорошей работы всей функции.
    //    int count;

    int list[10] = {1, 2, 3, 4, 1, 5, 2, 4234, 2, 1};
    FOR_COUNT(args, i, count, argc, 1) {
        cout << i << " " << count << endl;
    }
    FOR_COUNT(list, i, count, 10, 1) {
        cout << i << " " << count << endl;
    }
    FOR i IN (list) {
        cout << i << ' ';
    }
    cout << endl;

    std::cout << "Hello, World!" << std::endl;

    END;  // нужен для культурного завершения функции
}
