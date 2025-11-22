#include <stdio.h>
#include <string.h>
void print(char *C)
{
    int i = 0;
    // while(*(C+i) != '\0') OR while(C[i] != '\0')
    while (*C != '\0')
    {
        printf("%c ", *C);
        C++;
    }
    printf("\n");
}

int main()
{

    char C[6] = "Hello"; // stores adddress in stack
    // char *c1 = "hello";----> stores address during compile time
    printf("\nSize of C is: %d", sizeof(C));
    printf("\nLength of C is: %d\n", strlen(C));

    print(C); // pass by reff

    return 0;
}