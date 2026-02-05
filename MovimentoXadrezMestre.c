#include <stdio.h>

//Mover a Torre Cinco casas para a direita usando a Recursiva
void moverTorre(int casas){
    if (casas > 0) {
        printf("Torre: Direita\n");
        moverTorre(casas -1);
    }
}

//Bispo loop anilhado
void moverBispoAnilhado(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int c = 0; c < 1; c++) {
            printf("Bispo Anilhado: Cima, Direita\n");
        }
    }
 }

 // Mover Rainha Oito casas a esquerda usando Recursiva
 void moverRainha(int casas) {
    if (casas > 0) {
        printf("Rainha: Esquerda\n");
        moverRainha(casas - 1);
    }
 }

// Mover Cavalo Duas casas para baixo e uma casa para esquerda usando Loop Complexo
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int c = 0; c < 2; c++) {
            printf("Cavalo: Cima\n");
            if (c>= 1) continue;
        }
        printf("Cavalo: Direita\n");
    }
}

 //
//Declaração das funções
int main() {
    moverTorre(5);

    moverBispoAnilhado(5);

    moverRainha(8);

    moverCavalo(3);

    return 0;
}