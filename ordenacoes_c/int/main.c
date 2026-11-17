#include <stdio.h>

int main ()
{
    int vetor[5] = {2, 9, 1, 17, 0};
    int achou = 0;
    int aux = 0;

    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 4; j ++){
            if(vetor[j] > vetor[j + 1]){
                aux = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = aux;

                achou = 1;
            }
        }
        if(!achou) break;
    }

    for(int i = 0; i < 5; i ++){
        printf("|%d|\n", vetor[i]);
    }

    return 0;
}