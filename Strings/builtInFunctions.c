#include <stdio.h>
#include <string.h>

int main()
{

    // Example1:
    puts("\nTo find the 'Length' of the Stirng:\n");
    char *str = "Work on improving the skils.";
    int len = strlen(str);

    printf("%d\n", len); // 28 ---> Number of characters before '\0'
    // can't use pointers for sizeOf,
    // but size is 29 includes '\0'
    // we can use sizeOf in normal string array

    // Example2:
    puts("\nTo Copy Strings:\n");
    char s1[] = "Shuvam Prusty";

    int size = sizeof(s1);
    printf("size is: %d\n", size);

    char s2[size];
    strcpy(s2, s1); // means whatever in s1 put it in s2 also, deep copy

    printf("%s\n", s1);
    printf("%s\n", s2);

    // Check whether deep copy or not
    s2[0] = 'A';

    puts("\nDeep copy: ");
    printf("%s\n", s1);
    printf("%s\n", s2);

    // Example3:
    puts("\nTo Concatenate Strings:");

    // Must define the size here to concatenate in 1st String Array
    char s3[15] = "Shuvam"; 
    char s4[] = " Prusty";

    strcat(s3, s4);
    printf("After concatenation: %s\n", s3);

    //but if we apply pointers in s3 and s4, it will be read only

    return 0;
}