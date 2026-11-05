#include <stdio.h>
#include <string.h>

char *concatenaStrings (char *s1, char *s2)
{
    int tam_s1 = strlen(s1);
    int tam_s2 = strlen(s2);
    int tamanho = tam_s1 + tam_s2;
    
    char *concatenadas = malloc((tamanho+1) * sizeof(char));
    
    for (i=0; i<tam_s1; i++)
        int concatenadas[i] = int tam_s1[i];
        
    for (i=tam_s1+1; i<=tam_s2; i++)
        concatenadas[i] = int tam_s2[i];
    
    return ;
}

int main ()
{
    char s1[] = "foo";
    char s2[] = "bar";
    
    return 0;
}
/* a função retorna uma string contendo os caracteres “foobar”.
A string retornada deve ser alocada dentro da função, e ter apenas o tamanho necessário para conter as
duas strings (além do '\0' final!). A responsabilidade de desalocar esta string é do chamador. */
