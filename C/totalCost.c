#include <stdio.h>

int main()
{
    // Creating variables for different data types.
    int items = 40;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    //Print Variables
    printf("Number of Items: %d\n", items);
    printf("Cost Per Item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c", total_cost, currency);

    return 0;
}