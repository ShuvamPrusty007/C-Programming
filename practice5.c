#include <stdio.h>
#include <string.h>
int search(char ch[], int len, char ele)
{

    for (int i = 0; i < len; i++)
    {
        if (ele == ch[i])
            return i;
    }

    return -1;
}

int main()
{
    char ch[] = "Shuvam Prusty";

    printf("size: %d\n", sizeof(ch));
    // printf("length: %d\n", strlen(ch)); // 13

    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
    }

    int length = i;
    printf("length: %d\n", length);

    int index = search(ch, length, 'a');

    printf("Index of that character: %d", index);

    return 0;
}