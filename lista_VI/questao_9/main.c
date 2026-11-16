#include <stdio.h>

int main ()
{
    int matriz[2][2] = {
        {4, 3},
        {6, 7},
    };

    int linhas = 0, colunas = 0;

    printf("Quantas linhas a matriz tem?\nR:");
    scanf("%d", &linhas);

    printf("Quantas colunas a matriz tem?\nR:");
    scanf("%d", &colunas);

    int vetor[linhas * colunas];

    int espaco_vetor = 0;

    for(int i = 0; i < linhas; i ++){
        for(int j = 0; j < colunas; j ++){
            vetor[espaco_vetor] = matriz[i][j];
            espaco_vetor ++;
        }
    }

    for(int i = 0; i < linhas * colunas; i ++){
        printf("%d |%d|\n", i + 1, vetor[i]);
    }

    return 0;
}