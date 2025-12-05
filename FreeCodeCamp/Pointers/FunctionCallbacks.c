#include <stdio.h>
void A()
{
    printf("\nRemember why u started !");
}

void B(void (*ptr)()) // function pointer as argument
{
    ptr(); // call-back function that "ptr" ponits to
}

int main()
{

    // Callback Function :
    // When reference to a function is passed through another function

    // void (*p)() = A;
    // B(p);

    // or

    B(A);//---- "A" is callback function called by "B"

    return 0;
}