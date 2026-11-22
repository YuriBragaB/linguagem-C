#include <stdio.h>
#include <string.h>

int main ()
{
    char nomes [10][40] = {"Yuri", "Benício", "Lavínia", "Murilo", "Otto", "Isis", "Paola", "Nayra", "Hila", "Paloma"};

    char aux[40];
    int achou = 0;

    for (int i = 0; i < 10; i ++){
        for(int j = 0; j < 9; j ++){
            if(strcmp(nomes[j], nomes[j + 1]) > 0){
                strcpy(aux, nomes[j + 1]);
                strcpy(nomes[j + 1], nomes[j]);
                strcpy(nomes[j], aux);

                achou = 1;
            }
        }
        if(!achou) break;
    }

    printf("Matriz de strings ordenada:\n");

    for(int i = 0; i < 10; i ++){
        printf("|%s|\n", nomes[i]);
    }

    return 0;
}