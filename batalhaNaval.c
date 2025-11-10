#include <stdio.h>

//definido constantes 
#define LINHAS 10
#define COLUNAS 10

// Desafio Batalha Naval - MateCheck


int main()
{

    int tabuleiro[LINHAS][COLUNAS];
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            tabuleiro[i][j] = 0;
            
           
        }
       
    }

    //Vertical ou horizontal
    //navio 1 
    tabuleiro[1][0] = 3;
    tabuleiro[1][1]= 3;
    tabuleiro[1][2]= 3;

    //navio 2 
    tabuleiro[5][2] = 3;
    tabuleiro[6][2]= 3;
    tabuleiro[7][2]= 3;

    //Diagonal
    //navio 3
    tabuleiro[3][5] = 3;
    tabuleiro[4][6]= 3;
    tabuleiro[5][7]= 3;

    //navio 4
    tabuleiro[9][9] = 3;
    tabuleiro[8][8]= 3;
    tabuleiro[7][7]= 3;

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
          
            
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
