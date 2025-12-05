#include <stdio.h>
int main()
{

    char arr[5] = {'a', 'b', 'c', 'd', 'e'};

    printf("\nThe character is: %c\n", arr[2]);

    printf("\nThe addresses of charcters are: \n");
    printf("\na: %p", &arr[0]);
    printf("\nb: %p", &arr[1]);
    printf("\nc: %p", &arr[2]);
    printf("\nd: %p", &arr[3]);
    printf("\ne: %p\n", &arr[4]);

    char ch = 'A';
    int n = (int)ch;
    printf("\nThe character is: %c", ch);
    printf("\nThe Ascii value of charcter is: %d", ch);
    printf("\nThe Ascii value from type cast is: %d\n", n);

    // Ascii values:
    //  A-Z ---> 65 -90
    //  a-z ---> 97 -122
    //  0-9 ---> 48 - 57
    //  '\0' ---> null character ---> 0

    char c = '\0'; // null
    printf("\nThe value of character 'c' is: %c ------> null\n", c);
    printf("\nThe value of interger 'c' is: %d\n", c);

    printf("\n");
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c ", arr[i]);
        i++;
    }

    return 0;
}