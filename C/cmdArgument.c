/*
Working with command line arguments. 
What is Command line arguments?
- additional piece of data that can be passed to a C program when it is executed from command line. 
- it allows us to customize the program behavior without modifying the source code. 

Syntax:
int main(int argc, char *argv[])
{

}

argc: Represents the number of command line arguments including the program name itself. 
      It is the count of the number of arguments. For example if we execute our program

argv: It is a array of character pointers where each element points to a string. 
      This string is a command line argument. It stores the individual arguments as a strings.
      The first element points to the program name itself, 
      the second element points to the first command line argument.


*/

#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of arguments: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}

/*How to run this program?

- gcc cmdArgument.c
- ./a.out arg1 arg2 arg3 arg4

Result should look like this:
Number of arguments: 5
Argument 0: ./a.out
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3
Argument 4: arg4
*/