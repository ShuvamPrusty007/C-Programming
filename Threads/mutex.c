#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t locked;

int global_variable = 0;

void *profunc(void *ptr)
{
    pthread_mutex_lock(&locked);

    global_variable++;

    int i = 0;
    while (i < 6)
    {
        printf("global_variable: %d\n", global_variable);
        i++;
    }

    printf("Finished....\n");

    pthread_mutex_unlock(&locked);
}

int main()
{
    int error;
    pthread_t th1, th2;

    if (pthread_mutex_init(&locked, NULL) != 0)
    {
        printf("Mutex creation was unsuccessful.\n");
        exit(1);
    }

    global_variable = 0;

    pthread_create(&th1, NULL, profunc, NULL);
    pthread_create(&th2, NULL, profunc, NULL);

    pthread_join(th1, NULL);
    pthread_join(th2, NULL);

    return 0;
}