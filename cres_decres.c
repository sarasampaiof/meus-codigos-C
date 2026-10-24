#include <stdio.h>
int main() 
{
    int quant, i=0, ant, atual, cres=1, decres=1;

    printf("Digite a quantidade de números a ser recebida (dois ou mais): ");
    scanf("%d", &quant);

    printf("Digite o primeiro número: ");
    scanf("%d", &ant);

    for (i = 1; i < quant; i++) 
    {
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
