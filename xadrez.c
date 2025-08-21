#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() { 

    int tor = 1;
    int bis = 1;
    int rai = 1;
    int cav = 1;
    int i = 1; // para uso da estrutura WHILE

    printf("**** Tutorial Xadrez****\n\n");
    //printf("****Escolha a peça que voce quer saber o movimento.****\n\n");
    //printf("1 - Torre\n");
    //printf("2 - Bispo\n");
    //printf("3 - Rainha\n");

    // Implementação de Movimentação da torre com while
    printf("\n Movimento da torre\n");
    while (tor <= 5)
    {
      printf("DIREITA\n");
      tor++;  
    }
    
    // Implementação de Movimentação do Bispo com do while
    printf("\n Movimento do bispo\n");
    do {
    printf("DIAGONAL (CIMA, DIREITA)\n");
    bis++;  
    } while (bis <= 5);

    // Implementação de Movimentação da Rainha com for
     printf("\n Movimento da rainha\n");
     for (rai; rai <= 8; rai++)
    {
      printf("ESQUERDA\n");  
    }    
    
    // Implementação de Movimentação do cavalo com for aninhado
     printf("\n Movimento do cavalo\n");
    // Estrutura em FOR
    for (cav; cav <= 1; cav++) {
      for ( int i = 1 ; i <= 2; i++) {
        printf("BAIXO\n");
      }  
      printf("ESQUERDA\n"); 
    }
    
    // estrutura em WHILE
    //while (cav < 2) {
    //  while (i <= 2) {
    //    printf ("BAIXO\n");
    //    i++;
    //  }
    //  printf("ESQUERDA\n");  
    //  cav++;
    //}
  
    // Estrutura em DO WHILE
    //do {
    //  printf("BAIXO\n");
    //  cav++;
    //} while (cav <=2);
    //printf("ESQUERDA\n");
    
    
    
    
    
    
    
    
    
    
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
