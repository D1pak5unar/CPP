/*
C has the following conditional statements:

1. Use if to specify a block of code to be executed, if a specified condition is true
eg:
if (20 > 18) {
  printf("20 is greater than 18");
}

2. Use else to specify a block of code to be executed, if the same condition is false
eg:
int time = 20;
if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}


3.Use else if to specify a new condition to test, if the first condition is false
eg:
int time = 22;
if (time < 10) {
  printf("Good morning.");
} else if (time < 20) {
  printf("Good day.");
} else {
  printf("Good evening.");
}


4. You can also use else if to eliminate multiple lines of codes as follows:

Syntax:
variable = (condition) ? expressionTrue : expressionFalse;

eg: 

instead of writing the following:
int time = 20;
if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}

You can write this:
int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");
*/

// Program to find if the number is odd or even!

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int myNum = 598;

    if(myNum % 2 == 0){
        printf("%d is even number\n", myNum);
    } else{
        printf("%d is odd number\n", myNum);
    }

    return 0;
}

/*
Program to find if the given number is positive or negative?

int main()
{
    int yourNum = 60;

    if (yourNum > 0) {
        printf("%d is positive number\n", yourNum);
    } else {
        printf("%d is negative number\n", yourNum);
    }
    return 0;
}
*/

