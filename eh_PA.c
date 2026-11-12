#include <stdio.h>

int ehProgressaoAritmetica (int n1, int n2, int n3, int n4);

int main () {
    int x1, x2, x3, x4;

    printf("Digite 4 números: ");
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);

    if ( ! ehProgressaoAritmetica (x1, x2, x3, x4))
        printf("A sequência não é uma PA. ");
    else
        printf("A sequência é uma PA e sua razão é %d.", ehProgressaoAritmetica (x1, x2, x3, x4));
    
    return 0;
}

int ehProgressaoAritmetica (int n1, int n2, int n3, int n4) {
    int eh_PA, razao;

    if (n2-n1 == n3-n2 && n3-n2 == n4-n3) {
        eh_PA = 1;
        razao = n2-n1;
    }
    else
        eh_PA = 0;
    
    if (eh_PA)
        return razao;
    else
        return 0;
}
