#include <stdio.h>

int main()
{
    int a = 20;
    float b = 5.56;
    char c = 'D';
    char str[] = "Howdy World!";

    // using specific formats for printf functions:

    printf("Integer: %d\n", a);   //Integer 20
    printf("Float: %f\n", b);      //Float 5.56789
    printf("Character: %c\n", c);   //Character D
    printf("String: %s", str);      //String str

    return 0;

}