#include "echo.h"


int main(int n, String args[])
{
    int i = 1;

    while (i < n)
        printf("%s ", args[i++]);

    printf("\n");

    return 0;
}
