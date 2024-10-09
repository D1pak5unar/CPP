/*
- After fork() call, processes are not synchronized in any way. So we use wait() call. 

- Wait() call sleeps calling process until one of the processes children terminate
and return pid of the process that had  terminated. 

- Simple use case: When you want a parent process to suspend itself until a child
process it generated with  fork() call terminates. 

- By default wait() is  blocking call i.e. it simply suspends the process until
it receives the SIGCHILD signal. 

-  If you want to make it non-blocking, you can use waitpid() function. This 
is often useful when you want to do some  other work while periodically checking 
to see if one of the child  processes has terminated. 

- The waitpid() call takes in 3 arguments. By default the waitpid call waits for 
any terminated child, but this can be modified by the first argument to wait f
or a particular set of processes. The second argument is for the status code return. 
The last argument specifies whether it is blocking or not, 
using constants such as WNOHANG.

SYNTAX: int pid = waitpid(-1,  &status, WNOHANG);
*/