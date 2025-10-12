#include <stdio.h>
#include <string.h>

int main()
{

    typedef struct pokemon
    {
        char name[50];
        int speed;
        int attack;
    } Pokemon;

    typedef struct legendaryPokemon
    {
        Pokemon nesting;
        char specialAbility[50];
    } Legend;

    Legend Mewtwo;
    strcpy(Mewtwo.nesting.name, "Mewtwo");
    Mewtwo.nesting.speed = 300;
    Mewtwo.nesting.attack = 350;
    strcpy(Mewtwo.specialAbility, "Pressure");

    typedef struct pokemonGod
    {
        Legend nesting2;
        int specialAttack;
    } God;

    God Arceus;
    strcpy(Arceus.nesting2.nesting.name, "Arceus");
    Arceus.nesting2.nesting.speed = 400;
    Arceus.nesting2.nesting.attack = 450;
    strcpy(Arceus.nesting2.specialAbility, "Turns anyone to stone");
    Arceus.specialAttack = 1000;

    printf("Name: %s\n", Arceus.nesting2.nesting.name);
    printf("Speed: %d\n", Arceus.nesting2.nesting.speed);
    printf("Attack: %d\n", Arceus.nesting2.nesting.attack);
    printf("Special Ability: %s\n", Arceus.nesting2.specialAbility);
    printf("Special Attack: %d\n", Arceus.specialAttack);

    return 0;
}
