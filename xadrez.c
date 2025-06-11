#include <stdio.h>

void moveTorre(int casas){
 if(casas > 0){
    printf(" torre se moveu Direita\n");
    moveTorre(casas - 1);
 }
}


void moverBispo(int casas){
    if(casas > 0 ){
        printf("bispo se moveu para diagonal\n");
        moverBispo( casas -1);
    }
    
}

void moverPeao(int casas){
    if (casas > 0 && casas <= 2)
    {
       for(int i = 0; i <casas; i++){
        printf("peao se mover para frente\n");
       }
    }else{
        printf("peao so pode ir ate uma a duas casas\n");
    }   
}

void moverRainha(int casas){
    int metade = casas / 2;
    for(int i = 0; i < metade; i++){
        printf("Rainha se moveu para a direita\n");
    }
    for(int i = 0; i < casas - metade; i++){
        printf("Rainha se moveu na diagonal\n");
    }
}


void moverCavalo(int casas){
    for(int i = 0; i < casas;i++){
        printf("cavalo se moveu em L\n");
    }
}


int main(){
    moverBispo(3);
    moverCavalo(4);
    moverPeao(2);
    moverRainha(5);

    moveTorre(5);
    return 0;
}