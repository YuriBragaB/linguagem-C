#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[20];
    int aux = 0;
    int numeros_escolhidos = 0;
    int continua = 1;

    // pegando os válores, impondo um limite
    for(int i = 0; i < 20; i ++){
        if(continua){
            printf("Insira números no vetor unidimensional (máximo 20 números)\nResposta:");
            scanf("%d", &numeros[i]);

            numeros_escolhidos ++;

            printf("Digite 0 para parar\nResposta:");    
            scanf("%d", &continua);
        }
    }

    // algoritmo de ordenação bobble sort, substitui de forma ordenada o array, colocando outro em seu lugar, o maior valor vai para o final da lista com uma bolha, por isso seu nome
    for(int i = 0; i < numeros_escolhidos; i ++){
        for(int j = 0; j < numeros_escolhidos - 1; j ++){
            if(numeros[j] > numeros[j +1 ]){
                aux = numeros[j + 1];
                numeros[j + 1] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    // mostrando valores em uma linha
    for(int i = 0; i < numeros_escolhidos; i ++) printf("|%d|\n", numeros[i]);

    return 0;
}