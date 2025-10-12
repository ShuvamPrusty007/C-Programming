#include <stdio.h>
#include <string.h>
int main()
{

    typedef struct Books
    {
        char name[50]; // declartion
        float price;
        int pages;
    } Book;

    Book a, b, c;

    strcpy(a.name, "The Perfect Us"); // assingment
    a.price = 250;
    a.pages = 300;

    strcpy(b.name, "Revolution Twenty 20");
    b.pages = 350;
    b.price = 280;

    strcpy(c.name, "Wish I could tell you");
    c.pages = 280;
    c.price = 140;

    printf("Name of the book: %s\n", a.name);
    printf("Price of the book: %f\n", a.price);
    printf("How many pages are there in the boook: %d\n", a.pages);

    printf("\n");

    printf("Name of the book: %s\n", b.name);
    printf("Price of the book: %f\n", b.price);
    printf("How many pages are there in the boook: %d\n", b.pages);

    printf("\n");
    
    printf("Name of the book: %s\n", c.name);
    printf("Price of the book: %f\n", c.price);
    printf("How many pages are there in the boook: %d\n", c.pages);

    return 0;
}