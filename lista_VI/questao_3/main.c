#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz1[2][2];
    int matriz2[2][2];

    // pega elementos matriz 1
    for (int i = 0; i < 2; i ++){
        for(int j = 0; j < 2; j ++){
            printf("\nDigite o elemento (%d | %d) da matriz 1\nResposta: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // pega elementos matriz 2
    for (int i = 0; i < 2; i ++){
        for(int j = 0; j < 2; j ++){
            printf("\nDigite o elemento (%d | %d) da matriz 2\nResposta: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // soma das matrizes
    printf("Soma das matrizes: \n");
    for (int i = 0; i < 2; i ++){
        for(int j = 0; j < 2; j ++){
            printf("\nSoma elemento (%d | %d) das matrizes: %d\nResposta: ", i, j, matriz1[i][j] + matriz2[i][j]);
        }
    }

    // soma das diagonais da matriz 1
    int contador1 = 0; 
    for (int i = 0; i < 2; i ++){
        for(int j = 0; j < 2; j ++){
            if(i == j){
                contador1 += matriz1[i][j];
            }
        }
    }

    // soma das diagonais da matriz 1    
    int contador2 = 0; 
    for (int i = 0; i < 2; i ++){
        for(int j = 0; j < 2; j ++){
            if(i == j){
                contador2 += matriz2[i][j];
            }
        }
    }
    printf("\nSoma das diagonais da matriz 1: %d\nSoma das diagonais da matriz 2: %d", contador1, contador2);
    return 0;
}