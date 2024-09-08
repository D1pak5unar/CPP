//This is how you will write string with structure. (struct)
//when using strcpy you will have to use #include<string.h> header!!

#include<stdio.h>
#include<string.h>

struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30];
};

int main()
{
    struct myStructure s1;

    //now you can assign the value of string using strcpy function.
    strcpy(s1.myString, "This is string!!");

    //Let's also assign value to myNum and myChar when we are at it!!
    s1.myNum = 54;
    s1.myLetter = 'F';


    //Let's print these suckers!!
    printf("Let's print this string: %s\n", s1.myString);
    printf("Let's print this number: %d\n", s1.myNum);
    printf("Let's print this character: %c\n", s1.myLetter);

    return 0;

}
