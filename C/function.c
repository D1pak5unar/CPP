/*
Function is block of code that run when it is called. It can pass data aka parameters,
into the functions. They are important for reusing code. Define once and use many times.
*/

#include<stdio.h>

//creating a function.
void myFunction()
{
    printf("I got executed!\n");
}

int main()
{
    myFunction(); //call a function.
    myFunction();
    myFunction();
    myFunction();//it can also be called multiple times.

    return 0;
}
//will output "I got executed!"