/* Escreva um programa que gera N valores aleatórios do tipo int no intervalo [20, 80], onde N é
uma constante dada. O programa deve calcular e imprimir a média (não se preocupe com o
arredondamento), e depois mostrar cada um dos valores, dizendo se ele é maior, menor ou igual à
média. Por fim, o programa deve mostrar quantos dos valores eram maiores e quantos eram menores
do que a média. */

#include <stdio.h>
#include <stdlib.h>
#define N 5
int main () {

    int v[N], i, soma=0, media=0, maiores=0, menores=0, iguais=0;

    srand(time(NULL));

    for (i=0; i<N; i++) {
        v[i] = rand() % 10; //61 + 20;
        soma += v[i];

        printf("%d ", v[i]);
    }

    media = soma / N;

    printf("\nSoma dos valores: %d \nMédia: %d\n", soma, media);

    for (i=0; i<N; i++) {

        if (v[i] > media) {
            maiores++;
            printf("%d maior que a média.\n", v[i]);
        }

        else if (v[i] < media) {
            menores++;
            printf("%d menor que a média.\n", v[i]);
        }

        else {
            iguais++;
            printf("%d igual à média.\n", v[i]);
        }
}

    return 0;
}
