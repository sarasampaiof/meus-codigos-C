#include <stdio.h>

double casasDecimais (double x) {
    return (x - (int)x); // typecasting = força a variável a ficar no formato de inteiro, o que trunca o número, ou seja, "apaga"/subtrai sua parte inteira, nesse caso
}

int main() {

    printf("%f", casasDecimais(2.4)); // exemplo de número p/ substituir a variável da função e executá-la

    return 0;
}
