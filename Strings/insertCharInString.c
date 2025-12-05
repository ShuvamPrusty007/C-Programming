#include <stdio.h>

int main()
{

    // Insert 'l' in position 2 but not replace
    char s1[10] = "Helo";
    int size = 0;
    while (s1[size] != '\0')
    {
        size++;
    }

    for (int i = size - 1; i >= 2; i--)
    {
        // moving the delements 1 place to right
        s1[i + 1] = s1[i];
    }
    s1[2] = 'l';
    s1[size + 1] = '\0';

    printf("%s", s1);

    return 0;
}