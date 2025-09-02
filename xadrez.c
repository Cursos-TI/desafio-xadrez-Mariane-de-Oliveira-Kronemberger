#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Mariane de Oliveira Kronemberger

//Void TORRE: Horizontal, Direita, 5 casas
void moveTorre (int tower){
    if (tower < 5){
        printf("♖ - Direita\n");
        //Chamada recursiva para o próximo passo
        moveTorre(tower + 1);
    }
}

//Void BISPO: Diagonal, Cima à direita, 5 casas
//Loop aninhado Externo (cima) e Interno (direita)
void moveBispo (int bishop){
    if (bishop < 5) {// condição de parada

    //Loop externo: Cima
    for (int i = 0; i < 1; i++) {
        printf("♗ - Cima,");

        //Loop interno: Direita
        for (int j = 0; j < 1; j++) {
            printf(" Direita\n");
        }
    }
    //Chamada recursiva para o próximo passo
    moveBispo(bishop + 1);
 }    
}

//void RAINHA: Esquerda, 8 casas
void moveRainha(int queen){
    if (queen < 8){
        printf("♕ - Esquerda\n");
        //Chamada recursiva para o próximo passo
        moveRainha (queen + 1);
    }
}

int main() {

    //Variáveis

    int bispo = 0, torre = 0, rainha = 0, cavalo1, cavalo2 = 0; //Atribuição de cavalo1 = 0 acontece no loop
    char tecla;

    //Início do código

    printf ("-*-*-*- Xadrez MateCheck -*-*-*-*\n");
    printf("\n");

    //TORRE: Horizontal, Direita, 5 casas
    printf("Movimentando: TORRE\n");
    moveTorre(torre);

    printf("\nDigite C para Continuar: \n --->");
    scanf(" %c", &tecla);
    printf(" \n");

    //BISPO: Diagonal, Cima à direita, 5 casas
    printf("Movimentando: BISPO\n");
    moveBispo(bispo);
    
    printf("\nDigite C para Continuar: \n --->");
    scanf(" %c", &tecla);
    printf(" \n");

    //RAINHA: Esquerda, 8 casas
    printf("Movimentando: RAINHA\n");
    moveRainha(rainha);

    printf("\nDigite C para Continuar: \n --->");
    scanf(" %c", &tecla);
    printf(" \n");

    //CAVALO: L pequeno, 2 Casas cima, 1 Direita
    //Loop complexo (for e while)
    printf("Movimentando: CAVALO\n");
    for(cavalo1 = 1; cavalo1 <= 2; cavalo1++){ //Loop FOR externo
        printf("♘ - Cima\n");

        if(cavalo1 == 2){
            while(cavalo2 < 1){ //Loop WHILE interno
                printf("♘ - Direita\n");
                cavalo2++; //Incremento anti loop infinito
                break;; //Utilização do break
            }
        }
    }

    printf("\nDigite C para Encerrar: \n --->");
    scanf(" %c", &tecla);
    printf(" \n");
    
    return 0;
}