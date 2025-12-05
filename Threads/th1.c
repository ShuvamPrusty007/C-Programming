#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *func(void *arg)
{
    char *str = (char *)arg;
    printf("Test from thread: %s\n", str);
    sleep(3);
    printf("Ending thread.\n");
}

int main()
{
    pthread_t th1, th2;
    char *a = "th1";
    char *b = "th2";

    if (pthread_create(&th1, NULL, func, a) != 0)
        return 1;

    if (pthread_create(&th2, NULL, func, b) != 0)
        return 2;

    if (pthread_join(th1, NULL) != 0)
        return 3;

    if (pthread_join(th2, NULL) != 0)
        return 4;

    return 0;
}