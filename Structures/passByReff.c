#include <stdio.h>
#include <string.h>

typedef struct pokemon
{
    int hp;
    char name[50];
    int speed;
    int attack;
} Pokemon;

void change(Pokemon *p)
{
    // (*p).hp = 280;
    // strcpy((*p).name, "Raichu");
    // (*p).speed = 250;
    // (*p).attack = 200;

    //OR

    p->hp = 250;
    strcpy(p->name, "Pikachu");
    p->speed = 200;
    p->attack = 180;

    return;
}

int main()
{
    Pokemon pk;

    pk.hp = 250;
    strcpy(pk.name, "Pikachu");
    pk.speed = 200;
    pk.attack = 180;

    printf("\nInfo of the pokemon before change: \n");
    printf("%d\n", pk.hp);
    printf("%s\n", pk.name);
    printf("%d\n", pk.speed);
    printf("%d\n", pk.attack);

    change(&pk);//Pass By Refference, address is passed

    printf("\nInfo of the pokemon after change:\n");
    printf("%d\n", pk.hp);
    printf("%s\n", pk.name);
    printf("%d\n", pk.speed);
    printf("%d\n", pk.attack);

    printf("\nTherefore we can use pointers as Pass by Reffernce in functions.\n");

    return 0;
}
