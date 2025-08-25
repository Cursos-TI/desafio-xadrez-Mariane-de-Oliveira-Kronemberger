#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Mariane de Oliveira Kronemberger

int main() {

    //Variáveis

    int bispo = 0, torre = 0, rainha = 0;
    char tecla;

    //Início do código

    printf ("-*-*-*- Xadrez MateCheck -*-*-*-*\n");
    printf(" \n");

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

