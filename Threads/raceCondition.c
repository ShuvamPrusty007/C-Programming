#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int mails = 0;

void *func(void *arg)
{
    for (int i = 0; i < 100000; i++)
        mails++;

    //read mails
    //increment
    //write mails
}

int main()
{
    pthread_t th1, th2;

    if (pthread_create(&th1, NULL, func, NULL) != 0)
        return 1;

    if (pthread_create(&th2, NULL, func, NULL) != 0)
        return 2;

    if (pthread_join(th1, NULL) != 0)
        return 3;

    if (pthread_join(th2, NULL) != 0)
        return 4;

    printf("Variable value: %d\n", mails);

    return 0;
}