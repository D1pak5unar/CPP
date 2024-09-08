//enum is a special type that represents a group of constants (unchangeable values).

#include<stdio.h>

enum level 
{
    LOW = 30,
    MEDIUM = 40,
    HIGH = 70
};

int main()
{
    //Create enum variable and assign a value.
    enum level myVar = HIGH;

    //print the enum variable.
    printf("%d\n", myVar);

    return 0;

}