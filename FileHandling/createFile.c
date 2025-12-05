#include <stdio.h>
int main()
{
    // To create file
    // fopen(<filename or path>, <opening-mode>);
    FILE *ptr = fopen("CustomFile.txt", "w");

    // To write line by line in a file:
    // fputs(<character-array>, <file-pointer>);
    char str[] = "Switch yahi se hogi.";
    fputs(str, ptr);

    //must close a file after you are done with it.
    fclose(ptr);

    return 0;
}