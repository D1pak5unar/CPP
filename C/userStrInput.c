// Let user input string

#include<stdio.h>

int main()
{
    //Create string variable
    char firstName[30]; //This will cause buffer overflow if the user inputs name with over 30 characters.

    // Ask user to input text
    printf("Please enter your First Name: ");

    //This will prevent buffer overflow by only reading 29 character at most.

    fgets(firstName, sizeof(firstName), stdin); 
    //outPut the text
    printf("Hello %s\n", firstName);

    return 0;
}