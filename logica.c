#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int result1, result2;
    char firstTribute, secondTribute;
    int atack1, atack2, defense1, defense2, back1, back2;


    srand(time(0));

    atack1 = 1;
    atack2 = 0;
    defense1 = 0;
    defense2 = 0;
    back1 = 0;
    back2 = 1;


    printf ("welcome to game!\n");
    printf("escolha seu primero movimento:\n");
    printf("'A' for Atck\n");
    printf("'D' for defense\n");
    printf("'B' for back\n");

    printf("escolha a comparação:");
    scanf(" %c", &firstTribute);

    switch (firstTribute)
    {
    case 'A':
    case 'a':
        printf("you i choose atack\n");
        result1 = atack1 > atack2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("you i choose defense\n");
        result1 = defense1 > defense2 ? 1 : 0;
        break;
    case 'B':
    case 'b':
        printf("you i choose back\n");
        result1 = back1 > back2 ? 1 : 0;
        break;
    default:
    printf("option ivalid");
        break;
    }


     printf("escolha seu segundo movimento:\n");
     printf("escolha um tributo diferente do primero");
    printf("'A' for Atck\n");
    printf("'D' for defense\n");
    printf("'B' for back\n");

     printf("escolha a comparação:");
    scanf(" %c", &secondTribute);

    if(firstTribute == secondTribute){
        printf("you i chose same tribute");
    }else{

    switch (secondTribute)
    {
    case 'A':
    case 'a':
        printf("you i choose atack\n");
        result2 = atack1 > atack2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("you i choose defense\n");
        result2 = defense1 > defense2 ? 1 : 0;
        break;
    case 'B':
    case 'b':
        printf("you i choose back\n");
        result2 = back1 > back2 ? 1 : 0;
        break;
    default:
    printf("option ivalid");
        break;
    }
    }

    if(result1 && result2) {
        printf("Parabens, voce VENCEU!\n");
    } else if(result1 != result2) {
        printf("EMPATE\n");
    } else {
        printf("Voce PERDEU\n");
    }

    return 0;

}