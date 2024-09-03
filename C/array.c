//program that calculates the average of different ages:

#include<stdio.h>

int main()
{
int ages[] = {20, 22, 34, 56, 18, 58, 19};

float avg, sum = 0;
int i;

//get the length of an array
int length = sizeof(ages) / sizeof(ages[0]);

//Loop through the elements of array
for (i = 0; i < length; i++)
{
    sum += ages[i];
}

//Calculate the average by dividing the sum by length
avg = sum / length;

//print the average
printf("The average age is: %.2f\n", avg);


return 0;

}

