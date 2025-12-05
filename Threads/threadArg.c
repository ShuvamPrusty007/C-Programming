#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

void *func(void *arg)
{
    // sleep(1);
    int index = *(int *)arg;

    printf("%d ", prime[index]);

    free(arg);
}

int main()
{

    pthread_t th[10];

    printf("\nThe prime nos are: ");
    int i; // for thread to access the value of arrary properly
    for (i = 0; i < 10; i++)
    {
        int *a = malloc(sizeof(int));
        *a = i;
        if (pthread_create(&th[i], NULL, func, a) != 0)
        {
            perror("Thread not created successfully.\n");
            return 1;
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (pthread_join(th[i], NULL) != 0)
        {
            perror("Thread failed to join.\n");
            return 2;
        }
    }

    

    return 0;
}