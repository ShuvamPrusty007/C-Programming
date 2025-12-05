#include<stdio.h>
int main(){
    int x;
    printf("Enter first number\n");
    scanf("%d", &x);
    int y;
    printf("Enter second number\n");
    scanf("%d", &y);
    int sum = x+y;
    printf("The sum of two numbers is: %d", sum);

    return 0;
}