//
// Created by cyton_code on 15.03.2021.
//

#include "plugin.h"
//#include "lib/syntax/pascal.h"
//#include "lib/syntax/str/str.h"
//#include "lib/scripts/list/len/len.h"
#include "lib/scripts/list/sort/sort_1.h"
#include "lib/scripts/list/echo/echo.h"

int main() {
    const int length = 5;
    int array[length] = {30, 50, 20, 10, 40};

    sort(length, array);

}
