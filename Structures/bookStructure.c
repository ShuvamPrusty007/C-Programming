#include<stdio.h>
#include<string.h>
int main(){

    struct Book
    {
        char name[50];//declartion
        float price;
        int pages;
    }a,b,c;

    //int x = 10;// Declares and initializes x with 10
    // a.name = "The Prefect Us";// Wrong assignment
    // Since name is a character array, you cannot assign a 
    // string literal to it directly. Arrays in C are not 
    // assignable after declaration.

    strcpy(a.name, "The Perfect Us");//assingment
    a.price = 250;
    a.pages = 300;

    strcpy(b.name, "Revolution Twenty 20");
    b.pages = 350;
    b.price = 280;

    strcpy(c.name, "Wish I could tell you");
    c.pages = 280;
    c.price = 140;

    printf("%s\n", a.name );
    printf("%f\n", a.price);
    printf("%d\n", a.pages);

    printf("%s\n", b.name);
    printf("%f\n", b.price);
    printf("%d\n", b.pages);

    printf("%s\n", c.name);
    printf("%f\n", c.price);
    printf("%d\n", c.pages);


    // HOW ARE STRUCTURE ELEMENTS STORED?
    //ELEMENTS ARE STORED IN A CONTINUOUS MEMORY LOCATION.

    return 0;
}