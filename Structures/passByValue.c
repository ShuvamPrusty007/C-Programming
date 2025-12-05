#include <stdio.h>
#include <string.h>

typedef struct pokemon
{
    char name[50];
    int speed;
    int attack;
} Pokemon;

void change(Pokemon r)
{

    strcpy(r.name, "Raichu");
    r.speed = 250;
    r.attack = 220;

    return;
}

void fun(Pokemon p)
{

    printf("\nInfo of the Pokemon before changing: \n");
    printf("%s\n", p.name);
    printf("%d\n", p.speed);
    printf("%d\n", p.attack);

    return;
}

int main()
{
    Pokemon pikachu;
    strcpy(pikachu.name, "Pikachu");
    pikachu.speed = 200;
    pikachu.attack = 180;

    fun(pikachu);    // pass by value, structure directly is paased
    change(pikachu); // pass by value

    printf("\nInfo of the Pokemon after changing: \n");
    printf("%s\n", pikachu.name);
    printf("%d\n", pikachu.speed);
    printf("%d\n", pikachu.attack);
    printf("\nTherefore Structures are pass by Value\n");

    return 0;
}
