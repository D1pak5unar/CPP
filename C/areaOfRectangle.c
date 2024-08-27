//Calculating area of rectangle using c

#include <stdio.h>

int main()
{
    int length = 9;
    int width = 5;
    int area;

    //using formula A (Area) = lxw (length x width)

    area = length * width;

    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of Rectangle is: %d", area);

    return 0;
}