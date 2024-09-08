/*
Structures (also called structs) are a way to group several related variables into one place. 
Each variable in the structure is known as a member of the structure.

Unlike an array, a structure can contain many different data types (int, float, char, etc.).
*/

#include<stdio.h>

struct myStructure 
{
    int myNum;
    char myLetter;
};

int main()
{
    //create different structure variable.
    struct myStructure s1;
    struct myStructure s2;

    //assign values to different structure value.
    s1.myNum = 12;
    s1.myLetter = 'Z';

    s2.myNum = 56;
    s2.myLetter = 'G';

    //Print Values
    printf("s1 Numbers: %d\n", s1.myNum);
    printf("s1 Letter: %c\n", s1.myLetter);

    printf("s2 Number: %d\n", s2.myNum);
    printf("s2 Letter: %c\n", s2.myLetter);

    return 0;
}
