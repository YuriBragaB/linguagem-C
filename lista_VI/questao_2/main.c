#include <stdio.h>
#include <stdlib.h>

int pesquisa(int numero, int lista[])
{
    for(int i = 0; i < 5; i ++){
        if(lista[i] == numero){
            return i;
        }
    }
    return -1;
}
void troca_valores(int lista[])
{
    int nova_lista[5];

    for(int i = 0; i < 5; i ++){
        if(i == 0){
            nova_lista[0] = lista[i];
        }
        else {
            nova_lista[i] = nova_lista[i - 1] + lista[i];
        }
    }
    for(int i = 0; i < 5; i ++){
        if (i != 4){
            printf(" %d |", nova_lista[i]);   

            continue;   
        }      
        printf(" %d ", nova_lista[i]);
    }
}

int main()
{
    int numeros[5];

    for(int i = 0; i < 5; i ++){
        printf("Digite o valor do elemento %d no array unidimensional:\nResposta: ", i);
        scanf("%d", &numeros[i]);
    }
    
}