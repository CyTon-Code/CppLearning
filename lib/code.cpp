#include <iostream>
#include <cstring>

#define STR char*
#define CONST const
typedef const char* String;
using namespace std;

void print(String value)
{
 int n = strlen(value);
 for (int i = 0; i < n; i++) cout << value[i];
}


int main(void)
{
 String hello_world = "Hello, World!\n";

 print(hello_world);
 print("Hello, World!\n");

 return 0;
}
/*
#include <iostream>
#include <iomanip>

int main(void)
{
 std::cout << std::setprecision(15);
 return 0;
}
*/
//~ using std::cout;

//~ #define STR char*


void sys(String arg)
{
	printf(arg);
	char a;
    scanf("%c", &a);
}

int main(void)
{
    String hello_world = "Hello, World!\n";

    print(hello_world);
    print("Hello, Cpp!\n");

    return 0;
}
void print(String value, ...)
{
    int n = strlen(value);
    for (int i = 0; i < n; i++)
    {
        printf("%c", value[i]);
    }
}
//~ #include <iostream>
//~ #include <cstring>
//~ int len(String value)
//~ {
	//~ int n = 0;
	//~ while(value[n]!='\0')
	//~ {
		//~ n++;
	//~ }
	//~ return n;
//~ }

