#include <stdio.h>

#define N_LINHAS 3
#define N_COLUNAS 4

int main() {

    int i, j, soma = 0, maior = 0;

    int campo[N_LINHAS][N_COLUNAS] = {{81, 28, 240, 10}, {40, 10, 100, 240}, {20, 180, 110, 35}};


    for (i=0; i<N_LINHAS; i++) {
        soma = 0;

        for(j=0; j<N_COLUNAS; j++) {
            soma += campo[i][j];

        if (soma > maior)
            maior = soma;
        }
    }

    for(j=0; j<N_COLUNAS; j++) {
        soma = 0;

        for(i=0; i<N_LINHAS; i++) {
            soma += campo[i][j];

        if (soma > maior)
            maior = soma;
        }
    }

    printf("Maior valor da soma é %d", soma);
    return 0;
}
