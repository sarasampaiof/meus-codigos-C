#include <stdio.h>
int main() {
    int nums, i=0, ant, atual, cres=1, decres=1;

    printf("Digite a quantidade de números a ser recebida: ");
    scanf("%d", &nums);

    printf("Digite o primeiro número: ");
    scanf("%d", &ant);

    for (i = 1; i < nums; i++) {
        printf("Digite o próximo número: ");
        scanf("%d", &atual);

        if (atual <= ant)
            cres = 0;

        if (atual >= ant)
            decres = 0;

        ant = atual;
    }

    if (cres)
        printf("Crescente");
    else if (decres)
        printf("Decrescente");
    else
        printf("Nem crescente, nem decrescente");

    return 0;
}
