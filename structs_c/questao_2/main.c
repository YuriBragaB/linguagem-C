#include <stdio.h>
#include <string.h>

struct alunos 
{
    char nome[40];
    float notas[4];
    int media;
};


int main ()
{
    struct alunos alunos[3];

    for(int i = 0; i < 3; i ++){
        printf("Digite o nome do aluno %d\nR:", i + 1);
        fgets(alunos[3].nome, 40, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        for(int j =0; j < 4; j ++){
            printf("Digite a nota %d\nR:", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }
        getchar();
    }

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 4; j ++){
            alunos[i].media += alunos[i].notas[j];
        }
        alunos[i].media /= 4;
    }



    int aux = 0;
    int achou = 0; 

    for(int i = 0; i < 3; i ++){
     
        for(int j = 0; j < 2; j ++){
            if(alunos[i].media > alunos[i + 1].media){
                aux = alunos[i + 1].media;
                alunos[i + 1] = alunos[i];
                alunos[i].media = aux;

                achou = 1;
            }
            if(!achou) break;
        }
    }

    for(int i = 0; i < 3; i++){
        printf("|%s|\n", alunos[i].nome);
    }

    printf("Hello world");
    return 0;
}