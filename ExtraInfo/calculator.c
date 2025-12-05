#include <stdio.h>
int main()
{

    int a;
    printf("Enter value for operand a:");
    scanf("%d", &a);
    char ch;
    printf("Enter the operator:");
    scanf(" %c", &ch);
    int b;
    printf("Enter value for operand b:");
    scanf("%d", &b);

    switch (ch)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        if (b != 0)
            printf("Result: %f\n", (float)a / b);
        else
            printf("Error: Division by zero\n");
        break;

        break;

    default:
        printf("Invalid character");
    }

    return 0;
}