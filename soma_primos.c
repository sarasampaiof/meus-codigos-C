#include <stdio.h>
#define N 5
int main() {
    int num = 2, div, primo=1, qntd=0, soma=0;

    while (qntd < N) {

        primo=1;
        for (div = 2; div < num && primo; div++) {
            if (num % div == 0) {
                primo = 0; // ou seja, NÃO primo
            }
        }
        if (primo) {
            soma += num;
            qntd++;
        }
        num++;
    }

    printf("%d", soma);

    return 0;
}
