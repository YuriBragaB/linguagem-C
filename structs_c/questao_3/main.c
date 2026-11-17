#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cadastros{
    char nome[40];
    char esporte[40];
    int idade;
    int altura;
}atletas[4];

int main ()
{
    // pega dados dos atletas
    for(int i = 0; i < 4; i ++){
        printf("Digite o seu nome\nR:");
        fgets(atletas[i].nome, 40, stdin);
        atletas[i].nome[strcspn(atletas[i].nome, "\n")] = '\0';

        printf("Digite o seu esposte\nR:");
        fgets(atletas[i].esporte, 40, stdin);
        atletas[i].esporte[strcspn(atletas[i].esporte, "\n")] = '\0';

        printf("Digite sua idade\nR:");
        scanf("%d", &atletas[i].idade);

        printf("Digite sua altura em centímetros\nR:");
        scanf("%d", &atletas[i].altura);

        getchar();
    }

    char mais_velho[40];
    char mais_alto[40];
    int idade = 0;
    int altura = 0;

    for(int i = 0; i < 3; i ++){
        if(idade < atletas[i].idade){
            idade = atletas[i].idade;
            strcpy(mais_velho, atletas[i].nome);
        }
        if(altura < atletas[i].altura){
            altura = atletas[i].altura;
            strcpy(mais_alto, atletas[i].nome);
        }
    }

    printf("|%s|\n|%s|\n", mais_velho, mais_alto);

    return 0;
}