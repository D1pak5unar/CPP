// you can get the memory address of a variable with the reference operator &

#include<stdio.h>

int main()
{
    int myAge = 50;

    printf("%d", myAge);
    printf("%p\n", &myAge);

    return 0;
}