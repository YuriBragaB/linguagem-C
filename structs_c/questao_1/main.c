#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[40];
    float nota;
} notas;

int main ()
{
    notas aluno[3];

    for(int i = 0; i < 3; i ++){
        printf("Digite o nome do aluno %d\nR:", i + 1);
        fgets(aluno[i].nome, 40, stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';

        printf("Digite a nota do aluno %d\nR:", i + 1);
        scanf("%f", &aluno[i].nota);

        getchar();
    }

    for(int i = 0; i < 3; i ++){
        printf("Nome do aluno %d = %s\n", i + 1, aluno[i].nome);

        printf("Nota do aluno %d = %.2f\n\n", i + 1, aluno[i].nota);
    }

    return 0;
}