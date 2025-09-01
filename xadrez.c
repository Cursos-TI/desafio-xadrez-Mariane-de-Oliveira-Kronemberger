#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Mariane de Oliveira Kronemberger

int main() {

    //Variáveis

    int bispo = 0, torre = 0, rainha = 0, cavalo1, cavalo2 = 0; //Atribuição de cavalo1 = 0 acontece no loop
    char tecla;

    //Início do código

    printf ("-*-*-*- Xadrez MateCheck -*-*-*-*\n");
    printf("\n");

    //TORRE: Horizontal, Direita, 5 casas
    printf("Movimentando: TORRE\n");
    for (torre; torre < 5; torre++){
        printf("♖ - Direita\n");
    }

    printf("\nDigite C para Continuar: \n --->");
    scanf(" %c", &tecla);
    printf(" \n");

    //BISPO: Diagonal, Cima à direita, 5 casas
    printf("Movimentando: BISPO\n");
    while (bispo < 5){
        printf("♗ - Cima, Direita\n");
        bispo++;
    }

    printf("\nDigite C para Continuar: \n --->");
    scanf(" %c", &tecla);
    printf(" \n");

    //RAINHA: Esquerda, 8 casas
    printf("Movimentando: RAINHA\n");
    do {
        printf("♕ - Esquerda\n");
        rainha++;
    } while (rainha < 8);

    printf("\nDigite C para Continuar: \n --->");
    scanf(" %c", &tecla);
    printf(" \n");

    //CAVALO: L pequeno, 2 Casas baixo, 1 Esquerda
    //Loop aninhado (for e while)
    printf("Movimentando: CAVALO\n");
    for(cavalo1 = 1; cavalo1 <= 2; cavalo1++){ //Loop externo
        printf("♘ - Baixo\n");

        if(cavalo1 == 2){
            while(cavalo2 < 1){ //Loop interno
                printf("♘ - Esquerda\n");
                cavalo2++;
            }
        }
    }

    printf("\nDigite C para Encerrar: \n --->");
    scanf(" %c", &tecla);
    printf(" \n");
    
    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

