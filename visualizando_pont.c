#include <stdio.h>

int main() {

    int var, *p_var;
    // *alguma_coisa lê-se como "conteúdo apontado por alguma_coisa:", então, *p_var lê-se: conteúdo apontado por p_var
  
    var = 20; // exemplo
    p_var = &var; // variável p_var recebe o endereço de var

    printf("%d\n", var); // valor da variável
    printf("%p\n", &var); // endereço da variável
    printf("%p\n", p_var); // endereço apontado/armazenado pelo ponteiro
    printf("%d\n", *p_var); // valor apontado pelo ponteiro
    printf("%p\n", &p_var); // endereço do ponteiro
        
    return 0;
}
