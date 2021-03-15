#include "hello.h"
#include <iostream>

using namespace std;

int hello(String name) {
    cout << "Hello, ";

    for (int i = 0, n = strlen(name); i < n; i++) {
        cout << name[i];
    }
    return 0;
}

int main() {
    char *a;
    std::cin >> a;
    hello(a);
    return 0;
}
