#include <stdio.h>

int main ()
{
    int tabuleiro[8][8] = {
        {1, 3, 0, 5, 4, 0, 2, 1},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 6, 0},
        {1, 0, 0, 1, 1, 0, 0, 1},
        {0, 1, 0, 4, 0, 0, 1, 0},
        {0, 0, 3, 1, 0, 0, 1, 1},
        {1, 0, 6, 6, 0, 0, 1, 0},
        {1, 0, 5, 0, 1, 1, 0, 6},
    };

    int ausencias = 0;
    int peoes = 0;
    int cavalos = 0;
    int torres = 0;
    int bispos = 0;
    int reis = 0;
    int rainhas = 0;

    for (int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j ++){
            if(tabuleiro[i][j] == 0){
                ausencias ++;
            }
            else if(tabuleiro[i][j] == 1){
                peoes ++;
            }
            else if(tabuleiro[i][j] == 2){
                cavalos ++;
            }
            else if(tabuleiro[i][j] == 3){
                torres ++;
            }
            else if(tabuleiro[i][j] == 4){
                bispos ++;
            }
            else if(tabuleiro[i][j] == 5){
                reis ++;
            }
            else if(tabuleiro[i][j] == 6){
                rainhas ++;
            }
        }
    }

    printf("quantidade de casa vazias: %d\nquantidade de peões: %d\nquantidade de cavalso: %d\nquantidade de torres: %d\nquantidade de bispos: %d\nquantidade de reis: %d\nquantidade de rainhas: %d\n", ausencias, peoes, cavalos, torres, bispos, reis, rainhas);

    return 0;
}