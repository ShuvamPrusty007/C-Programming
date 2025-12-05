#include <stdio.h>
int main()
{

    float n;
    printf("Enter the percentage 0f student: ");
    scanf("%f", &n);

    // if (n >= 91 && n <= 100)
    // {
    //     printf("Excellent");
    // }
    // else if (n >= 81 && n <= 90)
    // {
    //     printf("Very Good");
    // }
    // else if (n >= 71 && n <= 80)
    // {
    //     printf("Good");
    // }
    // else if (n >= 61 && n <= 70)
    // {
    //     printf("Can do better");
    // }
    // else if (n > 51 && n <= 60)
    // {
    //     printf("Average");
    // }
    // else if (n >= 41 && n <= 50)
    // {
    //     printf("Below Average");
    // }
    // else
    // {
    //     printf("Fail");
    // }

    //-------------------------OR----------------------------

    // if (n > 90)
    // {
    //     printf("Excellent");
    // }
    // else if (n > 80)
    // {
    //     printf("Very Good");
    // }
    // else if (n > 70)
    // {
    //     printf("Good");
    // }
    // else if (n > 60)
    // {
    //     printf("Can do better");
    // }
    // else if (n > 50)
    // {
    //     printf("Average");
    // }
    // else if (n > 40)
    // {
    //     printf("Below Average");
    // }
    // else
    // {
    //     printf("Fail");
    // }

    //--------------------------OR-------------------------------

    if (n >= 91)
    {
        printf("Excellent");
    }
    else
    {
        if (n >= 81)
        {
            printf("Very Good");
        }
        else
        {
            if (n >= 71)
            {
                printf("Good");
            }
            else
            {
                if (n >= 61)
                {
                    printf("Can do better");
                }
                else
                {
                    if (n > 51)
                    {
                        printf("Average");
                    }
                    else
                    {
                        if (n >= 41)
                        {
                            printf("Below Average");
                        }
                        else
                        {
                            printf("Fail");
                        }
                    }
                }
            }
        }
    }

    return 0;
}