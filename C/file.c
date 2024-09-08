#include<stdio.h>

int main()
{
    FILE *fptr;

    /*this will create a file on your computer. 
    the syntax is:
     FILE *fptr;
    fptr = fopen(filename, mode);
    w, a and r are the mode available i.e. write to file w, 
    append new data into a file a (to add to the file without deleting old content), 
    and read from the file r.
    */
    //open file in writing mode.
    fptr = fopen("testFile.txt", "w");


    //write some text to the file.
    fprintf(fptr,"IF I write this here in the vs code, it will be written in the txt file. How Cool!!");
    

    //close the file
    fclose(fptr);

    return 0;

}