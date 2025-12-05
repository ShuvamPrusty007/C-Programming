#include <stdio.h>
void Print(char *c)
{
    printf("\nBelive in the %s\n", c);
}

int main()
{
    void (*p)(char *);
    p = Print;
    p("Universe");

    return 0;
}