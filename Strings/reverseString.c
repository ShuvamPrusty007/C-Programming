#include <stdio.h>
#include <string.h>

int main()
{

    char s[] = "shuvam prusty";
    char str[40];
    puts("Enter a string: ");
    scanf("%[^\n]s", str);

    // Size
    int size = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }

    int n = size;

    // reverse
    puts("The reverse is: ");
    for (int i = 0, j = n - 1; i <= j; i++,j--)
    {
        char temp = str[i];
        str[i] =str[j];
        str[j] = temp;
    }

    puts(str);

    return 0;
}


// ### Summary

// * `sizeof(s)` gives the total size of the array, 
// including the null terminator, which is 14 bytes.

// * `strlen(s)` counts the number of characters in the string,
//  excluding the null terminator, which is 13 characters.

// * But manual counting loop (`while (s[k] != '\0')`) 
// correctly counts the number of characters in the string, 
// which is 13.





