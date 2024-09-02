/*Loops can execute a block of code as long as a specified condition is reached.

Loops are handy because they save time, reduce errors, and they make code more readable.

The while loop loops through a block of code as long as a specified condition is true:
Example:
*/


#include<stdio.h>
#include<stdbool.h>

int main()
{
    int i = 0;

    while (i < 10)
    {
       printf("%d\n", i);
       i++;
    }
    
    return 0;
}