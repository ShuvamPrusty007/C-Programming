#include<stdio.h>
int main(){

    int base, power;
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the power: ");
    scanf("%d", &power);

    int num = 1;

    for(int i =1;i<=power;i++){
        num = num * base;
    }

    printf("%d to the power %d is: %d", base, power, num);


    return 0;
}