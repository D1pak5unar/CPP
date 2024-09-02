// Real-life boolean use case. 
//The following program will find if the individual is old enough to vote. 


#include<stdio.h>
#include<stdbool.h>

int main()
{
    int userAge = 25;
    int votingAge = 18;

    //using if statement for comparision
    if(userAge >=votingAge) {
        printf("Old enough to vote!\n");
    } else{
        printf("Not old enough to vote\n");
    }

    return 0;
}