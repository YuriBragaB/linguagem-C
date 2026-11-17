#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[40];
    int idade;
} pessoas[3];

int main ()
{
    strcpy(pessoas[0].nome, "Yuri");
    strcpy(pessoas[1].nome, "Paola");
    strcpy(pessoas[2].nome, "Livia");

    pessoas[0].idade = 20;
    pessoas[1].idade = 25;
    pessoas[2].idade = 30;

    int achou = 0;
    struct pessoa aux;

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 2; j ++){
            if(strcmp(pessoas[j].nome, pessoas[j + 1].nome) > 0){
                aux = pessoas[j + 1];
                pessoas[j + 1] = pessoas[j];
                pessoas[j] = aux;

                achou = 1;
            }
            if(!achou) break;
        }
    }

    for(int i = 0; i < 3; i ++){
        printf("|%d|\n", pessoas[i].idade);
    }

    return 0;
}