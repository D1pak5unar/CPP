//Using struct to store different information about this car.

#include<stdio.h>
#include<string.h>

struct car
{
    char brand[50];
    char model[50];
    int year;
};

int main()
{
    struct car car1 = {"Toyota", "Rav4", 2019};
    struct car car2 = {"Porsche", "911 Turbo S", 2024};
    struct car car3 = {"Kia", "Soul", 2017};

    //Lets print these bad boys!!
    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    printf("%s %s %d\n", car3.brand, car3.model, car3.year);

    return 0;

}
