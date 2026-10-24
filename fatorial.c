#include <stdio.h>
int main () 
{
    int num, i, fat=1;
    
    printf("Digite um número para ver seu fatorial: ");
    scanf("%d", &num);

    for (i=2; i<=num; i++) // i começa em 2 pois multiplicar por 1 não faz diferença e fat já inicia em 1 também
        fat *= i; // multiplica todos os números de 1 até o próprio num
    
    printf("Fatorial de %d: %d", num, fat);

    return 0;
}
// Fatorial de 0 = 1, apenas relembrando
