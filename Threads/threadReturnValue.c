#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void *roll_dice(void *arg)
{
    int value = (rand() % 6) + 1;
    int *result_thread = malloc(sizeof(int));
    printf("Address of result_thread is: %p\n", result_thread);
    *result_thread = value;

    return (void *)result_thread;
}

int main()
{
    int *result_main;
    srand(time(NULL));
    pthread_t th;

    if (pthread_create(&th, NULL, &roll_dice, NULL) != 0)
    {
        perror("Failed to create thread.\n");
        return 1;
    }

    if (pthread_join(th, (void **)&result_main) != 0)
    {
        perror("Failed to join thread.\n");
        return 2;
    }

    printf("Address of result_main id: %p\n", result_main);
    printf("Value of result_main: %d\n", *result_main);

    free(result_main);

    return 0;
}