#include <stdio.h>
int main ()
{
    int anterior, atual, quant = 1, cres = 1; // quant=1 pois o primeiro número da sequência também entra na conta
    
    printf("Digite um número: ");
    scanf("%d", &anterior);

    while (anterior > 0 && cres == 1)
    {
        scanf("%d", &atual);
        
        if (atual <= 0)
            break;
    
        if (anterior < atual)
            quant++;
        else
            cres = 0;

        anterior = atual;
    }

    printf("Maior sequência crescente: %d número(s).", quant);

    return 0; 
}
