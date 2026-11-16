#include <stdio.h>

int main ()
{
    int distancias[5][5] = {
        {0, 15, 30, 5, 12},
        {15, 0, 10, 17, 28},
        {30, 10, 0, 3, 11},
        {5, 17, 3, 0, 80},
        {12, 28, 11, 80, 0},
    };


    while(1){    
        int i = 0;
        int j = 0;

        printf("Digite a cidade 1:\nR:");
        scanf("%d", &i);

        printf("Digite a cidade 2:\nR:");
        scanf("%d", &j);

        if(i > 4|| j > 4){
            printf("número muito alto, insira um número menor do que 5\n");
            continue;
        }

        if (i == j){
            break;
        }
    }

    
    for(int i = 0; i  < 4; i ++){
        for(int j = 1; j < 5; j ++) {
            if(i + j > 4){
                continue;
            }
            printf("|%d, %d| |%d|\n",i + 1 , j + i + 1, distancias[i][j + i]);
        }
    }


    int acumulador = 0;
    int escolha = 1;
    while(escolha){    
        int i = 0;
        int j = 0;

        printf("Digite a cidade 1:\nR:");
        scanf("%d", &i);

        printf("Digite a cidade 2:\nR:");
        scanf("%d", &j);

        if(i > 4|| j > 4){
            printf("número muito alto, insira um número menor do que 5");
            continue;
        }

        acumulador += distancias[i][j];

        printf("digite 0 para parar:\nR: ");
        scanf("%d", &escolha);
    }

    printf("A distância percorrida ficou: %d", acumulador);

    return 0;
}