//Reading from the file.

#include<stdio.h>

int main()
{
    FILE *fptr;

    //open the file with read 'r' mode
    fptr = fopen("testFile.txt", "r");

    /*
    use this to test what happens if you ask to read the file that does not exist.
    fptr = fopen("tetFile.txt", "r");
    */
    

    //need to create a string that is big enough to store the content of the file
    //let's store the content of the file
    char myString[100];

    /*
    You need to use fgets() function to read the file which takes three parameters
    1. The first parameter specifies where to store the file content, 
        which will be in the myString array we just created.

    2. The second parameter specifies the maximum size of data to read, 
    which should match the size of myString (100).
    
    3. The third parameter requires a file pointer that is used to read the file (fptr in our example).
    */

   //read the content and store it inside myString. 
   //However, fgets only reads first line of the file.
   //We can use while loop to read remaining line.

   if(fptr != NULL)
   {
    while(fgets(myString, 100, fptr))
    {
        //print the file content
        printf("%s", myString);
    }

   }else {
    printf("File Not found!\n");
   }
    

    //close the file
    fclose(fptr);

    return 0;
}