/* 3. Suponha que dois números formam um par de Foolano se ambos têm os mesmos dígitos, na
mesma quantidade, desconsiderando-se os zeros à esquerda. Por exemplo, os pares abaixo são
pares de Foolano:
1234 e 4321; 1122 e 1212; 101 e 101; 344 e 443.
Já os pares abaixo não são pares de Foolano:
123 e 124; 221 e 112; 022 e 220.

a) Escreva uma função que retorna 1 se 2 números dados formam um par de Foolano, ou 0 do
contrário. O protótipo da função deve ser:
int ehParDeFoolano (unsigned int n1, unsigned int n2);

(****) OPCIONAL, faça depois que terminar a lista inteira! 
b) Escreva uma versão da função ehParDeFoolano que não faça uso de vetores. Você pode criar para isso uma função auxiliar que
recebe como parâmetro um número e um dígito e retorne o número de ocorrências daquele dígito no
número. Existe alguma vantagem em resolver este problema usando vetores? */

#include <stdio.h>

int ehParDeFoolano (unsigned int n1, unsigned int n2) {

    int v[n1]={0};
    int v[n2]={0};

    
