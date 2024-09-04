//scanf will help get input from users. 

#include<stdio.h>

int main()
{
    //create int and char variable
    int myAge;
    char myInitial;

    //ask user to enter age and Name
    printf("Please enter you Age and Initial: \n");

    //Get input from user and store it
    scanf("%d %c", &myAge, &myInitial);

    //Print your age
    printf("Your Age is: %d\n", myAge);

    //print your name
    printf("Your name is: %c\n", myInitial);

    return 0;

}