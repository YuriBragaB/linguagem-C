#include <stdio.h>
#include <string.h>

int main ()
{
    char matriz[5][40] = {"Yuri", "Paola", "Hila", "Pedro", "Braga"};
    int achou = 0;
    char aux[40];

    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 4; j ++){
            if(strcmp(matriz[j], matriz[j + 1]) > 0){
                strcpy(aux, matriz[j + 1]);
                strcpy(matriz[j + 1], matriz[j]);
                strcpy(matriz[j], aux);

                achou = 1;
            }
        }
        if(!achou) break;
    }

    for(int i = 0; i < 5; i ++){
        printf("|%s|\n", matriz[i]);
    }

    return 0;
}