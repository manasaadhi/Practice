#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <sys/wait.h> 
  
int main() 
{ 
    pid_t pid; 
  
    // fork first time 
    pid = fork(); 
  
    if (pid == 0) 
    { 
        // double fork 
        pid = fork(); 
        if (pid == 0) 
            printf("Grandchild pid : %d\n Child"
               " pid : %d\n", getpid(), getppid()); 
    } 
  
    else
    { 
        wait(NULL); 
        sleep(25); 
    } 
} 
