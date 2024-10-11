/*
- getopt function is used to parse command line options provided to your application. 
-  It is used to extract the options and their values from the command line arguments.
-   The getopt function returns an option character and its corresponding value.
-   The option character is a single character that represents the option.
*/

#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

int main (int argc, char **argv) 
{
    int option;
    int cflag = 0;
    int fflag = 0;
    while ((option = getopt(argc, argv, "cf")) != -1) 
    {
        switch (option) 
        {
            case 'c':
            if (cflag) 
            {
                printf("Only one option allowed\n");
                exit(1);
            } else 
                {
                cflag++;
                fflag++;
                }
            printf("You have selected centigrade\n");
            break;

            case 'f':
            if (fflag) 
            {
                printf("Only one option allowed\n");
                exit(1);
            } else 
                {
                    fflag++;
                    cflag++;
            printf("You want fahrenheit\n");
            break;

            default: 
            printf("Invalid input");
                }
        }
        return 0;
    }
}
