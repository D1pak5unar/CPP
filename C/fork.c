/* 
- The following code will fork a child and then have both parent 
and child output a screen.

- The fork() call lets you spin off another process to execute in the background
that is almost exact copy of the original.

- The parent gets returned the process id of the child from the fork() call. 

-  The child gets returned 0 from the fork() call.

- If the fork fail, it will return  -1.

- After fork(), call, they share all the initial values of variables, array etc, 
however, they have separate memory to communicate.
 */

#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>

int main (int argc, char** argv)
{
    pid_t childPid = fork(); // Child process created.
    if  (childPid == 0) // Child process
    {
        printf("I am a child! My parent's PIP is %d, and my PIP is %d\n", getppid(), getpid());
    } else if (childPid > 0) {
        printf("I am a parent! My pid is %d, and my child's pid is %d \n", getpid(), childPid);
    }
    else {
        perror("Failed to create  child process. Hence the fork failed\n");
    }
    return 0;
    }