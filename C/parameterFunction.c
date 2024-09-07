//adding parameters into a function 

#include<stdio.h>

void myFunction(char name[], int age)
{
    printf("Hello %s you are %d years old. \n", name, age);
}

int main()
{
    myFunction("Liam" , 12);
    myFunction("Sam", 43);
    myFunction("John", 24);

    return 0;
}