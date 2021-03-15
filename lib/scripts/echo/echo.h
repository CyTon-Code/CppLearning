//#include "../../syntax/echo.h"
#include "../../syntax/string/string.h"

int echo(int n, String args[]) {
    int i = 1;

    while (i < n)
        printf("%s ", args[i++]);

    printf("\n");

    return 0;
}
