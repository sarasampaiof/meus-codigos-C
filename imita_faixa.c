#include <stdio.h>
#define LARGURA_FAIXA 6

void main () {

    int i;

    while (1) {

        for (i=0; i<LARGURA_FAIXA; i++) {

            if (i == 1)
                pontoRolo1 ();

            else if (i == LARGURA_FAIXA - 2)
                pontoRolo2 ();

            else
                moveAgulha ();

        }

        rolaTecido (); // printf ("\n)
    }
}

    void pontoRolo1 () {
        printf("v"); }
        
    void pontoRolo2 () {
        printf("a"); }
        
    void moveAgulha () {
        printf(" "); }
        
    void rolaTecido () {
        printf("\n"); }
