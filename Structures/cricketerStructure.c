#include <stdio.h>
#include <string.h>

int main()
{

    typedef struct cricketerStructure
    {
        char name[50];
        int age, matches;
        float avereage_Runs;
    } Cricketer;

    int size;
    printf("Enter how many cricketers you want: ");
    scanf("%d", &size);

    Cricketer arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("\nName: ");
        scanf(" %[^\n]", arr[i].name);
        printf("Age: ");
        scanf("%d", &arr[i].age);
        printf("Matches: ");
        scanf("%d", &arr[i].matches);
        printf("Average: ");
        scanf("%f", &arr[i].avereage_Runs);
    }

    printf("\nInfo About Cricketers: \n");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("\nName: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Matches: %d\n", arr[i].matches);
        printf("Average Runs Scored: %f\n", arr[i].avereage_Runs);
        printf("\n");
    }

    return 0;
}