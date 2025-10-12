#include <stdio.h>
#include<string.h>

int main()
{

    char ch[] = "Hello";
    int i = 0;
    while (ch[i] != '\0')
    {
        printf("%c ", ch[i]);
        i++;
    }

    char str[] = "\nShuvam Is Going To Get A Very Good Job, Very Soon.";
    // printf("%s", str);
    puts(str);//it acts like printf but also automatically gives a \n i.e., gives a next line
    puts("Hey, you are on the right track, believe it.");

    char str1[80];
    printf("\nInput the String: ");
    // scanf("%s", str1);//only the first word without any space anything is considered
    // gets(str1);//can take the entire sentence as an input
    //but gets is outdated now in c
    scanf("%[^\n]s", str1);//it can also take an entire sentence as input
    printf("Output of the String is: %s\n", str1);


    return 0;
}