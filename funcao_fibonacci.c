#include <stdio.h>

int proxFibonacci (int n) {

    int ant0=0, ant1=1, atual=ant0+ant1;

    while (atual < n){
        ant0=ant1;
        ant1=atual;
        atual=ant0+ant1;
    }

    return(atual);
}

int main() {

    int n;

    scanf("%d", &n);

    printf("%d", proxFibonacci(n));

    return 0;
}
