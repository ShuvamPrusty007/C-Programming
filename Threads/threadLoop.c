#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int mails = 0;
pthread_mutex_t mutex;

void *func(void *arg)
{
    for (int i = 0; i < 100000; i++)
    {

        pthread_mutex_lock(&mutex);
        mails++;
        pthread_mutex_unlock(&mutex);

        // read mails
        // increment
        // write mails
    }
}

int main()
{
    pthread_t th[4];

    if (pthread_mutex_init(&mutex, NULL) != 0)
    {
        printf("Mutex creation was unsuccessful.\n");
        exit(1);
    }

    int i;
    for (i = 0; i < 4; i++)
    {
        if (pthread_create(th + i, NULL, func, NULL) != 0) // address: th + i
        {
            perror("Failed to create thread.");
            return 1;
        }
        printf("Thread %d has started.\n", i + 1);
    }
    printf("\n");

    for (i = 0; i < 4; i++)
    {
        if (pthread_join(th[i], NULL) != 0) // value: th[i]
            return 2;
        printf("Thread %d has finished.\n", i + 1);
    }

    pthread_mutex_destroy(&mutex);

    printf("\nVariable value: %d\n", mails);

    return 0;
}