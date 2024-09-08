#include <stdio.h>

// Define an enum to represent coffee sizes
enum CoffeeSize {
    SMALL,
    MEDIUM,
    LARGE,
    EXTRALARGE
};

int main()
{
    enum CoffeeSize size;
    int price;

    // Assuming the customer choice
    size = MEDIUM;  // Customer orders a medium coffee

    // Determine the price based on the coffee size
    switch (size) {
        case SMALL:
            price = 2;
            printf("You ordered a SMALL coffee. Price: $%d\n", price);
            break;
        case MEDIUM:
            price = 3;
            printf("You ordered a MEDIUM coffee. Price: $%d\n", price);
            break;
        case LARGE:
            price = 4;
            printf("You ordered a LARGE coffee. Price: $%d\n", price);
            break;
        case EXTRALARGE:
            price = 5;
            printf("You ordered an EXTRA LARGE coffee. Price: $%d\n", price);
            break;
        default:
            printf("Invalid size selected.\n");
    }

    return 0;
}
