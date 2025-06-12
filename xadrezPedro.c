#include <stdio.h>

// Constantes de movimento
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOV_CIMA 2
#define CAVALO_MOV_DIREITA 1

// Funções recursivas da torre, rainha e bispo

//Torre com função recursiva

void moverTorre (int mov) {
    if (mov == 0) return;
    printf("Direita\n");
    moverTorre(mov - 1);
}

// Rainha com função recursiva

void moverRainha (int mov) {
    if (mov == 0) return;
    printf("Esquerda\n");
    moverRainha(mov - 1);
}

// Bispo com recursão + loop anunhado

void moverBispo (int linha) {
    if (linha == 0) return;

    //Movimento vertical
    printf("Cima\n");

    // Movimento horizontal (Loop interno)
    
    for (int col = 0; col < 1; col++) {
        printf("Direita\n");
    }
    moverBispo(linha - 1);
}

int main(void) {
    
    printf("Desafio Jogo de Xadrez\n");

    // Movimento do BISPO

    printf("Movimentação do BISPO:\n");

    // Agora com funçao recursiva e loop aninhado
    moverBispo(BISPO_MOV);

    printf("\n");

    // Movimento da TORRE

    printf("Movimentação da TORRE:\n");

    // Agora com função recursiva 
    moverTorre(TORRE_MOV);

    printf("\n");

    // Movimento da RAINHA

    printf("Movimentação da RAINHA:\n");

    // Agora com função recursiva
    moverRainha(RAINHA_MOV);

    printf("\n");

    // Movimento do CAVALO

    printf("Movimentação do CAVALO:\n");


    /* O cavalo agora se move em L: 2 casas pra cima e 1 pra direita.
     * Usei loops aninhados com multiplas variáveis, break e continue.
     */
     
     for (int i = 0, cima = 0; i < 3; i++) {
        if(cima < CAVALO_MOV_CIMA) {
            printf("Cima\n");
            cima++;
            continue;
        }

        for (int j = 0; j < CAVALO_MOV_DIREITA; j++) {
            printf("Direita\n");
            break;
        }

        break;

     }

     return 0;

}



 





