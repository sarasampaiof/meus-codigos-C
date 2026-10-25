#include <stdio.h>
int main() 
{
    int num, dig, achou=0;

    printf("Digite o número: );
    scanf("%d", &num);
    printf("Digite o dígito: );
    scanf("%d", &dig);
    
    while (num > 0 && !achou) 
    {
        if (num % 10 == dig)
            achou = 1;
        
        num /= 10;
    }

    if (achou) // equivale a 'achou' ser verdadeiro, ou seja, se tiver sido setado p/ 1 (diferente de 0)
        printf("O dígito está presente no número.");

    return 0;
}
