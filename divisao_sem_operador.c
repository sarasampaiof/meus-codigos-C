#include <stdio.h>
int main ()
{
    int num1, num2, quo=0, resto;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    while (num1 >= num2) // enquanto o dividendo for maior ou igual ao divisor, faça:
    {
        num1 -= num2;
        quo++; // equivale a contar o número de vezes que o num2 cabe no num1
    }
    
    resto = num1;

    printf("Quociente da divisão: %d \nResto da divisão: %d", quo, resto);
        
    return 0;
}
