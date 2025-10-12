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

    printf("\nInfo of the pokemon before change: \n");
    printf("%d\n", pikachu.hp);
    printf("%s\n", pikachu.name);
    printf("%d\n", pikachu.speed);
    printf("%d\n", pikachu.attack);

    printf("\nInfo of the pokemon after change::\n");
    Pokemon *x = &pikachu;

    (*x).hp = 280;
    strcpy((*x).name, "Raichu");
    (*x).speed = 250;
    (*x).attack = 200;

    printf("%d\n", pikachu.hp);
    printf("%s\n", pikachu.name);
    printf("%d\n", pikachu.speed);
    printf("%d\n", pikachu.attack);

    printf("\nTherefore we can use pointers as Pass by Reffernce in functions.\n");

    return 0;
}
