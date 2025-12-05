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
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    struct student std[n];

    printf("%d\n", sizeof(std));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char));
    // printf("%d\n", sizeof(struct student));


    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name of std%d : ", i + 1);
        scanf("%s", &std[i].name);
        printf("\nEnter gender of std%d : ", i + 1);
        scanf("%s", &std[i].gender);
        printf("\nEnter age of std%d : ", i + 1);
        scanf("%d", &std[i].age);
        printf("\nEnter roll of std%d : ", i + 1);
        scanf("%d", &std[i].roll);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nData of std%d: \n", i + 1);
        printf("Name of student%d: %s\n", i+1, std[i].name);
        printf("Gender of student%d: %s\n", i+1, std[i].gender);
        printf("Age of student%d: %d\n", i+1, std[i].age);
        printf("Roll of student%d:%d\n", i+1, std[i].roll);
    }

    // strcpy(std[0].name, "shuvam");
    // std[0].age = 25;
    // std[0].roll = 35;
    // strcpy(std[0].gender, "male");

    // strcpy(std[1].name, "abhishek");
    // std[1].age = 15;
    // std[1].roll = 45;
    // strcpy(std[1].gender, "male");

    // printf("code is working fine\n");
    // printf("%s\n", std[0].name);
    // printf("%d\n", std[0].age);
    // printf("%d\n", std[0].roll);
    // printf("%s\n\n", std[0].gender);

    // printf("%s\n", std[1].name);
    // printf("%d\n", std[1].age);
    // printf("%d\n", std[1].roll);
    // printf("%s\n", std[1].gender);

    return 0;
}