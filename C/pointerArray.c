// Using pointers to access Array

#include<stdio.h>

int main()
{
    int myNumbers[4]= {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]); // print the value of each array
        printf("%p\n", &myNumbers[i]); // print the memory address of each array
    }

    return 0;

}