#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int global_variable = 0;
void *func(void *ptr)
{
    int *id = (int *)ptr;

    static int local_variabe = 0;

    global_variable = 7;
    local_variabe = 7;

    printf("\nThe id of thread is: %d\n", *id);
    printf("The value of global variable is: %d\n", global_variable);
    printf("The value of local variable is: %d\n", local_variabe);
}

int main()
{
    pthread_t t_id;

    for (int i = 0; i < 5; i++)
    {
        pthread_create(&t_id, NULL, func, (void *)&t_id);
    }

    pthread_exit(NULL);

    return 0;
}