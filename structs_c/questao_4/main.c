#include <stdio.h>
#include <string.h>

struct sistema {
    char nome[40];
    float notas[4];
    float media;
} alunos[3], aux;

int main ()
{
    // pegando nome e notas
    for(int i = 0; i < 3; i ++){
        printf("Digite o seu nome\nR: ");
        fgets(alunos[i].nome, 40, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        for(int j = 0; j < 4; j ++){
            printf("Digite sua nota %d\nR:", j + 1);
            scanf("%f", &alunos[i].notas[j]);

            alunos[i].media += alunos[i].notas[j];
        }
        alunos[i].media /= 4;

        getchar();
    }

    // ordenação por média que mostre o nome da pessoa, bobblesort com struct

    int achou = 0;

    for(int i = 0; i < 3; i ++){
        for (int j = 0; j < 2; j ++){
            if(alunos[j].media > alunos[j + 1].media){
                aux = alunos[j + 1];
                alunos[j + 1] = alunos[j];
                alunos[j] = aux;

                achou = 1;
            }
        }
        if(!achou) break;
    }

    // mostarando nome da pessoa

    for(int i = 2; i >= 0; i --){
        printf("%d |%s|\n", 4 - i, &alunos[i].nome);
    }

    return 0;
}