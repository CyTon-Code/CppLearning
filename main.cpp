//
// Created by cyton_code on 15.03.2021.
//

#include "plugin.h"
#include "lib/syntax/pascal.h"
#include "lib/syntax/str/str.h"
#include "lib/scripts/len/len.h"

MAIN {
    BEGIN;  // нужен для хорошей работы всей функции.
    str text = "Hello, world!";
    int n = len(text);
    cout << n << endl;

    COUNT(n) {
        cout << text[i];
    }
    cout << endl;

    END;  // нужен для культурного завершения функции
}
