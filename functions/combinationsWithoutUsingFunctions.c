#include <stdio.h>
int main()
{

    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    int r;
    printf("Enter r value: ");
    scanf("%d", &r);

    int nfact = 1, rfact = 1, nMinusrfact = 1;

    for (int i = 1; i <= n; i++)
    {
        nfact = nfact * i;
    }

    for (int i = 1; i <= r; i++)
    {
        rfact = rfact * i;
    }

    for (int i = 1; i <= n - r; i++)
    {
        nMinusrfact = nMinusrfact * i;
    }

    int combination = nfact / (rfact * nMinusrfact);

    printf("The combination is: %d", combination);

    return 0;
}