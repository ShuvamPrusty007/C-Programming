#include <stdio.h>
int main()
{
    // Opening a file
    // fopen(<filename or path>, <opening-mode>);
    // Used to open a file in a specific opening mode to
    // perform operations such as reading, writing tec.
    // It return a FILEwhich can then be used to interact
    // with the file.

    FILE *ptr = fopen("Shuvam.txt", "r");

    char str[1000];

    // To read line by line, we can use:
    // fgets(<charcter-array>, <maximum-byte-size>,<file-pointer>)
    // fget(destination, size, source )
    printf("\n");
    while (fgets(str, 1000, ptr) != NULL)
    {
        printf("%s", str);
    }

    return 0;
}