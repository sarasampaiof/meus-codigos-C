#include <stdio.h>

#define N 3
#define BUFLEN 128

int main() {

    int i, j;
    
    char m[N][BUFLEN]; // Matriz das strings

    // Leitura das strings
    for (i=0; i<N; i++)
        fgets (m[i], BUFLEN, stdin);

    // Mostra ao contrário
    for (i=N-1; i>=0; i--)
        printf("%s", m[i]);

    return 0;
}
