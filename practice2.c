#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #define pi 3.14
// #ifndef pi
// #warning pi not define
// #endif

struct student
{
    int age;
    int roll;
    char name[30];
    char gender[10];
};

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    int i = 0;
    while (i < 5)
    {
        // printf("%d ", *(ptr+i));
        printf("%d ", ptr[i]);
        i++;
    }


    return 0;
}