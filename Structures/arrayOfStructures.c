#include <stdio.h>
#include<string.h>

int main()
{

    typedef struct Pokemon
    {
        int hp, speed, attack;
        char tier, name[50];
    } pokemon;

    pokemon arr[3];

    arr[0].attack = 150;
    arr[0].hp = 100;
    arr[0].speed = 130;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "Bulbasor");

    arr[1].attack = 160;
    arr[1].hp = 90;
    arr[1].speed = 140;
    arr[1].tier = 'B';
    strcpy(arr[1].name, "Squirtel");

    arr[2].attack = 190;
    arr[2].hp = 200;
    arr[2].speed = 250;
    arr[2].tier = 'S';
    strcpy(arr[2].name, "Charizard");

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("Name: %s\n", arr[i].name);
        printf("Hp: %d\n", arr[i].hp);
        printf("Speed: %d\n", arr[i].speed);
        printf("Attack: %d\n", arr[i].attack);
        printf("Tier: %c\n", arr[i].tier);
        printf("\n");
    }
    

    return 0;
}