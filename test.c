#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
    int statLoc;
    int bryan;
    int value=0;

    bryan  = 10;
    if(fork() == 0)
    {
        printf("test PID parent %d , PID Child : %d\n",getppid(),getpid());
    }else{
        wait(&statLoc);
        printf("PID parent: %d , value returned %d",getpid(),WEXITSTATUS(statLoc));
    }
    exit(100);
}