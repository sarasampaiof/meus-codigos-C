#include <stdio.h>

double casasDecimais (double x) // double é como um float maior, que ocupa mais espaço na memória e tem mais precisão
{
    return (x - (int)x); // typecasting = força a variável a ficar (não permanentemente) no formato dado entre parênteses, nesse caso, o inteiro (o que trunca o número), ou seja, "apaga"/corta/subtrai sua parte decimal/fracionária
}

int main()
{
    printf("%f", casasDecimais(2.4)); // exemplo de número p/ substituir a variável da função e executá-la; %f também serve para tipo double no printf, porém, no scanf (p/ ler valor) seria %lf

    return 0;
}
