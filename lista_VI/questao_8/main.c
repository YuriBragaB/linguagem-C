#include <stdio.h>

int main ()
{
    int matriz[5][5] = {
        {1, 5, 67, 1, 9},
        {2, 32, 11, 5, 6},
        {3, 2, 1, 7, 9},
        {17, 17, 7, 7, 67},
        {1, 2, 3, 4, 5},
    };

    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 5; j ++){
            printf("|%d| ", matriz[j][i]);
        }
        printf("\n");
    }

    printf("Hello world");
    return 0;
}