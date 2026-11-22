#include <stdio.h>

int main ()
{
    int tabela_cidades[5][5] = {
        {0, 15, 30, 5, 12},
        {15, 0, 10, 17, 28},
        {30, 10, 0, 3, 11},
        {5, 17, 3, 0, 80},
        {12, 28, 11, 80, 0},
    };

    // item A


    while (1){
        int l = 0, c = 0;

        printf("Escolha a linha da tabela de cidades\nR:");
        scanf("%d", &l);

        printf("Escolha a coluna da tabela de cidades\nR:");
        scanf("%d", &c);

        if(c == l) break;
        
        printf("\nValor : |%d|\n", tabela_cidades[l][c]);
    }

    // item B

    int contador = 1;

    for(int i = 0; i < 5; i ++){
        for(int j = contador; j < 5; j ++){
            printf("|%d|\n", tabela_cidades[i][j]);
        }
        contador ++;
    }

    // item C

    int acumulador = 0;

    while (1){
        int i = 0, j = 0, e = 0;

        printf("Escolha a linha da tabela de cidades\nR:");
        scanf("%d", &i);

        printf("Escolha a coluna da tabela de cidades\nR:");
        scanf("%d", &j);
        
        acumulador += tabela_cidades[i][j];

        printf("Digite 0 para parar\nR:");
        scanf("%d", &e);

        if(e == 0) break;       
    }

    printf("Total do percurso : |%d|", acumulador);

    return 0;
}