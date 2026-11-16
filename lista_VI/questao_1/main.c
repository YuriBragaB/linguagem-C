#include <stdio.h>

// Questão 1

int main()
{
  int numeros [50] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5};

  int maior = 0;
  float media = 0;
  int contador = 0;
  int primos[10];
  int primo_contagem = 0;

  for (int i = 0; i < 10; i ++){
    if(numeros[i] > maior){
      maior = numeros[i];
    }
    media += numeros[i];

    int primo = 1;
    for(int j = 2; j < numeros[i]; j++ ){

      int divide = numeros[i] % j == 0 ? 1 : 0;

      if(divide){
        primo = 0;
        break;
      }
    }
    if(primo){
      primos[primo_contagem] = numeros[i];
      primo_contagem ++;
    }
    contador ++;
  }

    int aux = 0;

    for(int i = 0; i < 10; i ++){
        int achou = 0;
        
        for(int j = 0; j < 9; j ++){
            if (numeros[j] > numeros[j + 1]){

                aux = numeros[j + 1];
                numeros[j + 1] = numeros[j];
                numeros[j] = aux;
                
                achou = 1;
            }  
        }
        if(!achou) break;
    }

    printf("Lista ordenada:\n");
    for(int k = 0; k < 10; k ++){
        printf("%d | %d\n", k +1, numeros[k]);
    }

  media /= contador;

  printf("\nO maior número é: %d\nA média é: %.2f\n", maior, media);

  printf("\nNúmeros primos:");
  for (int i = 0; i < 4; i++){
    printf("\n%d", primos[i]);
  }

  return 0;
}


//   int maior = 0;
//   float media = 0;
//   int contador = 0;
//   int primos[10];
//   int primo_contagem = 0;

//   for (int i = 0; i < 10; i ++){
//     if(numeros[i] > maior){
//       maior = numeros[i];
//     }
//     media += numeros[i];

//     int primo = 1;
//     for(int j = 2; j < numeros[i]; j++ ){

//       int divide = numeros[i] % j == 0 ? 1 : 0;

//       if(divide){
//         primo = 0;
//         break;
//       }
//     }
//     if(primo){
//       primos[primo_contagem] = numeros[i];
//       primo_contagem ++;
//     }
//     contador ++;
//   }

//   media /= contador;

//   printf("O maior número é: %d\nA média é: %.2f", maior, media);

//   for (int i = 0; i < 1; i++){
//     printf("\n%d", primos[i]);
//   }

//   return 0;