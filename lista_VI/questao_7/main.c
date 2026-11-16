#include <stdio.h>

int main()
{
    int questionario[20][2];

    for(int i = 0; i < 20; i ++){
        int idade = 0;
        int escolha = 0;

        printf("Digite a sua idade\nR:");
        scanf("%d", &idade);

        printf("Opinião em relação ao filme \n1 | ótimo\n2 | bom\n3 | regular\n4 | ruim\n5 | péssimo.\nR:");
        scanf("%d", &escolha);

        if(escolha > 5 || idade > 120){
            printf("Resposta inválida!\n");

            i --;

            continue;
        }

        questionario[i][0] = idade;
        questionario[i][1] = escolha;
    }

    int quantidade_otimo = 0;
    int quantidade_bom = 0,  quantidade_regular = 0;
    int media_idade_ruim = 0, quantidade_ruim = 0;
    int maior_idade_pessimo = 0, quantidade_pessimo = 0;
    int maior_idade_otimo = 0, maior_idade_ruim = 0;


    for(int i = 0; i < 20; i ++){
        if (questionario[i][1] == 1){
            quantidade_otimo ++;

            if(questionario[i][0] > maior_idade_otimo){
                maior_idade_otimo = questionario[i][0];
            }
        }
        else if (questionario[i][1] == 2){
            quantidade_bom ++;
        }
        else if (questionario[i][1] == 3){
            quantidade_regular ++;
        }
        else if (questionario[i][1] == 4){
            quantidade_ruim ++;

            if(questionario[i][0] > maior_idade_ruim){
                maior_idade_ruim = questionario[i][0];
            }

            media_idade_ruim += questionario[i][0];
        }
        else if (questionario[i][1] == 5){
            quantidade_pessimo ++;

            if(questionario[i][0] > maior_idade_pessimo){
                maior_idade_pessimo = questionario[i][0];
            }
        }
    }

    int diferenca_percentual = (float)quantidade_bom  / 20 - (float) quantidade_regular / 20;
    int percentual = (float)quantidade_pessimo / 20;

    printf("Item a = %d\nItem b = %d\nItem c = %d\nItem d = %d | %d\nItem e = %d", quantidade_otimo, diferenca_percentual, media_idade_ruim / quantidade_ruim, percentual, maior_idade_pessimo, maior_idade_otimo - maior_idade_ruim);

    return 0;
}