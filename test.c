#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> 
#include <unistd.h> 
#include <ctype.h> 
#include <pthread.h> 
#include <stdlib.h> 
#include <semaphore.h>
#define N 100

int main()
{
    init(s1,1);
    init(s2,0);
    init(s3,0);
    init(s4,0);
    init(s5,0);
    init(s6,0);
    init(s7,0);
}

P1()
{
    while(1)
    {
        wait(s1);
        signal(s2);
        signal(s3);
    }
}
P2()
{
    while(1)
    {
        wait(s2);
        signal(s5);
        signal(s6);
    }
}
P3()
{
    while(1)
    {
        wait(s3);
        signal(s5);
        signal(s4);
    }
}
P5()
{
    wait(s5);
    wait(s5);

    signal(s7);
}
P4()
{
    wait(s4);
    signal(s7);
}
P6()
{
    wait(s6);
    signal(s7);
}
P7()
{
    wait(s4);
    wait(s5);
    wait(s6);

    signal(s1);
}