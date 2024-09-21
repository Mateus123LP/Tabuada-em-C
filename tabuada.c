#include <stdio.h>

int main() {
    printf("---------\n");
    printf("-Tabuada-\n");
    printf("---------\n\n");

    int num;

    int tabuada[20];
    tabuada[0] = num * 1;
    tabuada[1] = num * 2;
    tabuada[2] = num * 3;
    tabuada[3] = num * 4;
    tabuada[4] = num * 5;
    tabuada[5] = num * 6;
    tabuada[6] = num * 7;
    tabuada[7] = num * 8;
    tabuada[8] = num * 9;
    tabuada[9] = num * 10;

    printf("Escolha um número para fazermos a tabuada: ");
    scanf("%d", &num);

    printf("\n");

    if (num < 0) {
        printf("ERRO!!! Tabuada de número negativo\n\n");
    }
 
    printf("Tabuada por 1: %d\n",   tabuada[0] = num * 1);
    printf("Tabuada por 2: %d\n",   tabuada[1] = num * 2);
    printf("Tabuada por 3: %d\n",   tabuada[2] = num * 3);
    printf("Tabuada por 4: %d\n",   tabuada[3] = num * 4);
    printf("Tabuada por 5: %d\n",   tabuada[4] = num * 5);
    printf("Tabuada por 6: %d\n",   tabuada[5] = num * 6);
    printf("Tabuada por 7: %d\n",   tabuada[6] = num * 7);
    printf("Tabuada por 8: %d\n",   tabuada[7] = num * 8);
    printf("Tabuada por 9: %d\n",   tabuada[8] = num * 9);
    printf("Tabuada por 10: %d\n\n",   tabuada[9] = num * 10);
    
}