#include <stdio.h>

int ehBissexto (int ano); // protótipo da função

int main () {
    int ano; // apesar de ter o mesmo nome, não é a mesma variável da função ehBissexto!
    int eh_ou_nao; // flag
    
    printf("Digite um ano para verificar se é bissexto: ");
    scanf("%d", &ano);
    
    eh_ou_nao = ehBissexto (ano);

    if(eh_ou_nao)
        printf("%d é bissexto.", ano);
    else
        printf("%d não é bissexto.", ano);
    return 0;
}

int ehBissexto (int ano) {
    
    int eh_Bissexto; // flag
    
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
        eh_Bissexto = 1;
    else
        eh_Bissexto = 0;

    if (eh_Bissexto)
        return 1;
    else
        return 0;
}
