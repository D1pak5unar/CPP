/** 
Boolean was introduced in C99 or 1999.
It does not have its own character type like int, char, float. 
We will need to use a the header file when using it <stdbool.h> 
*/

#include<stdbool.h>
#include<stdio.h>

int main()
{
    bool isProgrammingFun = true;
    bool isLiftingFun = true;
    bool isLyingGood = false;

    //because bool outputs integers, you will need to use integer format specifiers %d
    printf("%d\n", isProgrammingFun);
    printf("%d\n", isLiftingFun);
    printf("%d\n", isLyingGood);

    return 0;

}

