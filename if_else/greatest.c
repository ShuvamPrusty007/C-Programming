#include <stdio.h>
int main()
{

    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);

    int b;
    printf("Enter value of b: ");
    scanf("%d", &b);

    int c;
    printf("Enter value of c: ");
    scanf("%d", &c);

    //Nested if else + else if and logical operators
    // if (a > b && a > c)
    // {
    //     printf("Then %d is greatest of three", a);
    // }
    // else if (b > a && b > c)
    // {
    //     printf("Then %d is greatest of three", b);
    // }
    // else if (c > a && c > b)
    // {
    //     printf("Then %d is greatest of three", c);
    // }else{
    //     printf("ALL NUMBERS ARE SAME");
    // }

    //Nested if else
    if(a>b){
        if(a>c){
            printf("Then a: %d is greatest of three", a);
        }else{
            printf("Then c: %d is greatest of three", c);
        }
    }else{
        if(b>c){
            printf("Then b: %d is greatest of three", b);
        }else{
            printf("Then c: %d is greatest of three", c);
        }
    }

    return 0;
}