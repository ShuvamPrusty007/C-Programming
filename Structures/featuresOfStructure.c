#include <stdio.h>
#include <string.h>

int main()
{

    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
    } Pokemon;

    Pokemon a, b, c;

    a.hp = 90;
    a.speed = 180;
    a.attack = 200;
    a.tier = 'A';

    b = a;//deep copy

    printf("Tier of B before: %c\n", b.tier);
    b.tier = 'B';
    printf("Tier of B after: %c\n", b.tier);
    printf("Tier of A : %c\n", a.tier);

    return 0;
}
