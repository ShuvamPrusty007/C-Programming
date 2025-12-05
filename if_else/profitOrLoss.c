#include <stdio.h>
int main()
{
    int cp;
    printf("The CP of an item is: ");
    scanf("%d", &cp);

    int sp;
    printf("The SP of an item is: ");
    scanf("%d", &sp);

    int profit, loss;
    profit = sp - cp;
    loss = cp - sp;

    if (sp > cp)
    {
        printf("Thr profit made by seller is: %d", profit);
    }
    else if (cp > sp)
    {
        printf("The loss made by seller is: %d", loss);
    }
    else
    {
        printf("Neither Profit nor loss");
    }

    return 0;
}