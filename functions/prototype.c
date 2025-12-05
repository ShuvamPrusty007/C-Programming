#include<stdio.h>

// void fun1(){
//     printf("Hello Normal function\n");
// }

int main(){
    // fun1();
    void fun();
    fun();
    return 0;
}

void fun(){
    printf("Hello Prototype");
}