#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    typedef struct Dates
    {
        int date, month, year;

    } Dates;

    Dates a, b;

    a.date = 20;
    a.month = 5;
    a.year = 1998;

    b.date = 4;
    b.month = 12;
    b.year = 2000;

    // bool flag = true;
    // if (a.date != b.date)
    //     flag = false;
    // if (a.month != b.month)
    //     flag = false;
    // if (a.year != b.year)
    //     flag = false;

    // if (flag == true)
    //     printf("The dates are same.");
    // else
    //     printf("The dates are different.");

    Dates c;
    c = a;//deep copy

    bool flag = true;
    if (a.date != c.date)
        flag = false;
    if (a.month != c.month)
        flag = false;
    if (a.year != c.year)
        flag = false;

    if (flag == true)
        printf("The dates are same.");
    else
        printf("The dates are different.");

    return 0;
}
