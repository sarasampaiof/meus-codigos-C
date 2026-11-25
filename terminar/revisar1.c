#include <stdio.h>
#include <stdlib.h> // p/ usar srand() e rand()
#include <time.h> // p/ usar time()

#define N 5 // exemplo de valor -> quantidade de números a serem 

int main () {

    int v[N], i, soma=0, media=0, maiores=0, menores=0, iguais=0;

    srand(time(NULL)); // gera valores aleatórios ; NULL indica que não é p/ armazenar o tempo em variável

    for (i=0; i<N; i++) {
        
        v[i] = rand() % 61 + 20; // isso faz: resto da div de um número aleatório (rand -> random) por 61 (cujo resultado sempre será um número entre 0 e 60, pois este há de ser menor que o próprio divisor, nesse caso, o 61) e soma 20 p/ ficarem valores de 20 a 80 (-> 0 a 60 + 20 (em cada resultado do resto da div) !!!
        
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
    printf("Maiores que a media: %d\n", maiores);
    printf("Menores que a media: %d\n", menores);

    return 0;
}
