#include <stdio.h>

int arredonda(double x) {

        if (x >= 0)
            return ((int)(x + 0.5));

        else // else facultativo, seria até + eficiente não colocá-lo para garantir que mesmo que o if não ocorra, a função tenha um retorno
            return ((int)(x - 0.5));
}

int main() {

    double num;
    scanf("%lf", &num); // lf = long float, precisa escrever assim pra scanf de var. tipo double
    printf("O valor arredondado é: %d", arredonda(num));

    return 0;
}
