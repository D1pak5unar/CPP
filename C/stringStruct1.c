//However, you do not have to use strcpy() function if you assign the variables during declaration. 

#include<stdio.h>

struct myStructure
{
   int myNum;
   char myChar;
   char myString[30];
};

int main()
{
    //Create structure variable and assign the value.
    struct myStructure s1 = {43, 'B', "This is a string!!"};

    //Let's print this puppy!!
    printf("%d\n %c\n %s\n", s1.myNum, s1.myChar, s1.myString);

    return 0;
}
