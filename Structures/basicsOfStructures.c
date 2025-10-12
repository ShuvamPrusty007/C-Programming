#include<stdio.h>
int main(){

    struct pokemon// user defined data type
    {
        int hp;
        int speed;
        int attack;
        char tier;
    };
    
    struct pokemon pikachu;
    printf("Enter attack of pikachu: ");
    scanf("%d", &pikachu.attack);
    // pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    printf("\nThe attack of Pikachu is: %d\n", pikachu.attack);
    printf("\nThe tier of Charizard is: %c\n", charizard.tier);

    return 0;
}