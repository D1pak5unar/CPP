/*
Instead of writing many if..else statements, you can use the switch statement.

The switch statement selects one of many code blocks to be executed:
*/

//Example:

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int day = 5;

    switch (day)
    {
        case 1:
        printf("Monday\n");
        break;

        case 2:
        printf("Tuesday\n");
        break;

        case 3:
        printf("Wednesday\n");
        break;

        case 4:
        printf("Thursday\n");
        break;

        case 5:
        printf("Friday\n");
        break;

        case 6:
        printf("Saturday\n");
        break;

        case 7:
        printf("Sunday\n");
        break;

        //The default keyword specifies some code to run if there is no case match:
        default:
        printf("Looking forward to the weekend\n");
    }

    return 0;
}

/* 
When C reaches the break word, it breaks out of switch block. 
This will stop the execution of more code and case testing inside the block.
When a match is found, and the job is done, it's time for a break. 
There is no need for more testing.
*/