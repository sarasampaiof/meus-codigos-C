#include <stdio.h>

void incDec (int *a, int *b);

int main () {

    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    incDec (&n1, &n2); // parâmetros passados por referência aos endereços & das variáveis

    return 0;
}

void incDec (int *a, int *b) { // a guarda o end. de n1 e b guarda o end. de n2; *a e *b, então, acessam os conteúdos dessas variáveis
    
    (*a)--;
    (*b)++;

    printf("Após as alterações: \n%d \n%d", *a, *b);
}
