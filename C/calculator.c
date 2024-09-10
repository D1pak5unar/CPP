// Simple calculator

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    //usage operation function.
    if (argc != 4)
    {
        printf("Usage: calculator <operand1> <operator> <operand2>\n");
        return 1;
    }

    //initialize operand and operator.
    double operand1 = atof(argv[1]);
    char operator = argv[2][0];
    double operand2 = atof(argv[3]);

    double result;

    //using switch for different case, break out if needed and default output.
    switch (operator)
    {
    case '+':
        result = operand1 + operand2;
        break;

    case '-':
        result = operand1 - operand2;
        break;

    case '*':
        result = operand1 * operand2;
        break;

    case '/':
        result = operand1 / operand2;
        break;
    
    default:
        printf("Given operator is invalid. Try again!\n");
        return 1;
    }

    //Calculate and output
    printf("%g %c %g = %g\n", operand1, operator, operand2, result);

    return 0;
}

// to run  the program, compile it with the following command:
// gcc calculator.c -o calculator
// then run it with the following command:
// ./calculator 10 + 5 (choose the operand and operator as your liking.)





