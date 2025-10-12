#include<stdio.h>
int main(){
    int n;
    printf("Ener a number: ");
    scanf("%d", &n);

    //1 3 5 7 9 .... 2n-1
   //a a+d a+2d a+3d ....... a+(n-1)d
    for(int i = 1;i<=2*n-1;i=i+2){
        printf("%d ", i);
    }
    return 0;
}