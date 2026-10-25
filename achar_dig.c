#include <stdio.h>
int main ()
{
    int num, dig, achou=0;

    printf("Digite o número: ");
    scanf("%d", &num);
    printf("Digite o dígito a ser procurado: ");
    scanf("%d", &dig);

    while (num > 0)
    {
        if (num%10 == dig) // analisa o dígito mais à direita p/ ver se coincide com o dígito procurado
            achou = 1;
        num /= 10; // "retira" o dígito mais à direita depois de analisá-lo p/ analisar o resto
    }

    if (achou)
        printf("O dígito está presente no número. ");
    else
        printf("O dígito não está presente no número. ");
    
    return 0;
}
