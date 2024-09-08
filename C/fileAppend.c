//Appending the file will add to the existing file.

#include<stdio.h>

int main()
{
    FILE *fptr; 

    //open the file in append mode (add to the existing file)
    fptr = fopen("testFile.txt", "a");

    //write what you want to add to the file
    fprintf(fptr, "\nThis will add to the existing file");

    //close the file.
    fclose(fptr);

    return 0;
}