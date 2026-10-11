#include <stdio.h>

int main () {
    int i, n;

    printf("Tabuada de: ");
    scanf("%d", &n);

    for (i=1; i<=10; i++)
        printf("%d x %d = %d\n", n, i, n*i);

    return 0;
}

/* USANDO WHILE
#include <stdio.h>

int main () {
    int i=1, n;

    printf("Tabuada de: ");
    scanf("%d", &n);

    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
} */
