#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

sem_t s1,meN;

int n_threads=0;
int s;

int br_rec(void)
{
    sem_wait(&meN);
    n_threads++;
    sem_post(&meN);

    sem_wait(&s1);
    return s;
}

void br_send(int x)
{
    int i;
    wait(&meN);
    for(i=0; i < n_threads; i++)
    {
        sem_post(&s1);
    }
    s=x;
    sem_post(&meN);
}
int main()
{
    sem_init(&s1,0,0);
    sem_init(&meN,0,1);
}