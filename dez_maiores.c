#include <stdio.h>
int main () {

    int i, n, n_maior=0;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("Os dez primeiros números maiores que %d são: \n", n);

    for (i=1; i<=10; i++) {
        n_maior=n+i;
        printf("%d\n", n_maior); // ou apenas sem a variável n_maior: printf("%d\n", n+i);
    }
    return 0;
}

/* USANDO WHILE
#include <stdio.h>
int main () {

    int i=1, n, n_maior=0;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("Os dez primeiros números maiores que %d são: \n", n);

    while (i <= 10) {
        n_maior=n+i;
        printf("%d\n", n_maior);
        i++;
    }
    return 0;
} */
