#include <stdio.h>
#include <string.h>

int main()
{
    // Shallow copy
    puts("\nExamples of Shallow  copy: \n");
    char s1[] = "Shuvam you are the best.";
    char *s2 = s1;      // s1[0]
    printf("%s\n", s1); // Shuvam you are the best.
    printf("%s\n", s2); // Shuvam you are the best.

    s1[0] = 'A';
    printf("%s\n", s1); // Ahuvam you are the best.
    printf("%s\n", s2); // Ahuvam you are the best.

    // Deep copy
    puts("\nExamples of Deep copy: \n");

    puts("Example1: \n");
    char s3[] = "Shuvam you are the best.";
    char s4[] = "Shuvam you are the best.";

    s3[0] = 'A';
    printf("%p\n", s3); // 000000164adffa10
    printf("%p\n", s4); // 000000164adff9f0
    printf("%s\n", s3); // Ahuvam you are the best.
    printf("%s\n", s4); // Shuvam you are the best.

    puts("\nExample2:\n");

    char s5[] = "Shuvam consistencey is the key to success.";

    int n = 0;
    int i = 0;

    while (s5[i] != '\0')
    {
        n++;
        i++;
    }

    int size = n;

    char s6[size + 1];

    for (int i = 0; i < size; i++)
    {
        s6[i] = s5[i];
    }
    s6[size] = '\0'; // Null-terminate the new string

    printf("%s\n", s5);
    printf("%s\n", s6);

    char s7[3] = {'a', 'b', 'c'}; // No '\0'
    printf("\n%s\n", s7);// Might print "abcXYZ..." or crash

    char s8[4] = {'a', 'b', 'c', '\0'};
    printf("%s\n", s8); // Prints "abc" safely

    return 0;
}