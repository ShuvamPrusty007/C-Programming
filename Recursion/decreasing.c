#include <stdio.h>
void greeting(int n)
{
    if (n == 0)
        return;

    printf("\nGood Morning!");
    greeting(n - 1);
    
    return;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    greeting(n);
    printf("\n");

    return 0;
}