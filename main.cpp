#include <iostream>
#include <list>
//#include "string"

using std::cout, std::endl;

int len_array(const std::string& str) {
    int count = 0;
    for (auto i:str) {
        count++;
    }
    return count;
}

int main() {
    float arr[] = {43.175, -11.082, 0, 32.217, -5.42, -2.477, 13.921, -14.184, -7.3, 8.13, 16.08, 123.3, 18.67};
    float sum_positive = 0, sum_negative = 0;  // count
    unsigned int count_positive_element = 0, count_negative_element = 0, zero = 0;  // count
    for (float i : arr)
        if (i > 0) {
            sum_positive += i;
            count_positive_element++;
        } else if (i < 0) {
            sum_negative += i;
            count_negative_element++;
        } else zero++;

    cout << "sum positive elements=" << sum_positive << " and quantity="
         << count_positive_element << endl;

    cout << "sum negative elements=" << sum_negative << " and quantity="
         << count_negative_element << endl;

    cout << "zero equal quantity=" << zero;

    return 0;
}

/*


#ifndef main_cpp
#define main_cpp

#include "plugin.h"
#include "syntax/pascal.h"
#include "syntax/python.h"

#endif // main_cpp

BEGIN {
//    int count;
    int list[10] = {1, 2, 3, 4, 1, 5, 2, 4234, 2, 1};
    FOR_COUNT(argc, args, i, count) {
        cout << i << " " << count << endl;
    }
    FOR_COUNT(10, list, i, count) {
        cout << i << " " << count << endl;
    }
    FOR i IN (list) {
        cout << i;
    }
    std::cout << "Hello, World!" << std::endl;
    END
}
 */