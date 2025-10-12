#include <stdio.h>
#include <string.h>

typedef struct pokemon
{
    int hp;
    char name[50];
    int speed;
    int attack;
} Pokemon;


int main()
{
    Pokemon pikachu;

    pikachu.hp = 250;
    strcpy(pikachu.name, "Pikachu");
    pikachu.speed = 200;
    pikachu.attack = 180;


    printf("\nADDRESS: \n");
    printf("%p\n", &pikachu.hp);
    printf("%p\n", pikachu.name);
    printf("%p\n", &pikachu.speed);
    printf("%p\n", &pikachu.attack);

    printf("\nAddress of Pointe and Pokemon created is same:\n");
    Pokemon* x = &pikachu;

    printf("%p", x);

    return 0;
}
