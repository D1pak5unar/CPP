//This program will do the countdown 
//from the given number i and wish you Happy New Year!!

#include<stdio.h>

int main()
{
    int countDown = 5;

    while (countDown > 0)
    {
        printf("%d\n", countDown);
        countDown--;
    }
    printf("Happy New year to y'll!!\n");

    return 0;

}