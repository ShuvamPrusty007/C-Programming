#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *func(void *ptr)
{
    sleep(5);
    printf("Now thread is running.\n");

    return NULL;
}

int main()
{
    pthread_t t_id;
    printf("Execution of Thread has not started yet.\n");
    pthread_create(&t_id, NULL, func, NULL);
    pthread_join(t_id, NULL);
    sleep(5);
    printf("Now Thread execution is completed.\n");

    exit(0);

    return 0;
}