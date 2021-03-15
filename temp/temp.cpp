#include <iostream>
using namespace std;
bool if1()
{
cout << "1";
return 0;
}
bool if2()
{
cout << "2";
return 0;
}
int main()
{
    bool term = true;
    cout << &if1 << &if2;
//    if1 = &if1 * int(term);
//    if2 = &if2 * int(!term);
//    if1();if2();
    cout << "Hello, world";
    return 0;
}
