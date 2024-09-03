// This program will reverse the order of the integer given by the user.

#include<stdio.h>

int main(void)
{
    int number = 0;
    int reverse = 0;
    int remainder = 0;

    //Prompt user to enter the number
    printf("Enter the number: ");
    scanf("%d", &number); //&number will stores the number entered by the user to number variable.

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10;
        reverse = reverse + remainder;
        number = number / 10;
    }
    printf("Reversed Number: %d\n", reverse);

    return 0;
    
}