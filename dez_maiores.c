#include <stdio.h>
int main () {

    int i, n, n_maior=0;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("Os dez primeiros números maiores que %d são: \n", n);

    for (i=1; i<=10; i++) {
        n_maior=n+i;
        printf("%d\n", n_maior);
    }
    return 0;
}
