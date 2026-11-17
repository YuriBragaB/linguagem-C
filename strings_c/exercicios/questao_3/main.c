#include <stdio.h>
#include <string.h>

int main ()
{
    char nomes[10][40] = {"Yuri", "Nayra", "Marcus", "Humberto", "Paola"};
    int achou = 0;
    char aux[40];

    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 4; j ++){
            if(strcmp(nomes[j], nomes[j + 1]) > 0){
                strcpy(aux, nomes[j + 1]);
                strcpy(nomes[j + 1], nomes[j]);
                strcpy(nomes[j], aux);

                achou = 1;
            }
        }
        if(!achou) break;
    }


    char pesquisa[40];

    printf("Digite o nome que você deseja pesquisar");
    fgets(pesquisa, 40, stdin);

    pesquisa[strcspn(pesquisa, "\n")] = '\0';

    int contador = 0;

    for (int i = 0; i < 5; i ++){
        if(strcmp(pesquisa, nomes[i]) == 0){
            contador ++;
        }
    }

    if(contador){
        printf("O nome está na matriz de strings");
    }
    else {
        printf("O nome não está na matriz de strings");
    }


    return 0;
}