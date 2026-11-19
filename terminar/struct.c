#include <stdio.h>

typedef struct {
    float maior;
    float menor;
    float meio;
} MaMeMe;

void classifica (MaMeMe* valores);

int main() {

    MaMeMe res; // cria a variável res c/ os campos da struct tipo 'MaMeMe', ou seja, res tem esses campos (que também são vars)
    
    scanf("%f %f %f", &res.maior, &res.menor, &res.meio); // lê valores pros campos de res
    
    classifica (&res); // função recebe o endereço da variável res com os campos maior, menor e meio como parâmetro de referência
    
    printf("%f %f %f", res.menor, res.meio, res.maior); // mostra na tela as vars de res 

    return 0;
}

void classifica (MaMeMe *valores) { // o ponteiro valores recebe, na chamada em main, o endereço de res e, assim, tem acesso aos seus campos

    if(valores->maior < valores->meio) // valores->maior = (*valores).maior OBS.: a notação com a seta -> foi feita p/ "facilitar"
        valores->meio = valores->maior;
  .
  .
  .
}

/*
MaMeMe classifica (float n1, float n2, float n3) {

    MaMeMe nums;

    if (n1 > n2 && n2 > n3) {
        nums.maior = n1;
        nums.menor = n3;
        nums.meio = n2;
    }

    else if (n1 > n3 && n3 > n2) {
        nums.maior = n1;
        nums.menor = n2;
        nums.meio = n3;
    }

    else if (n2 > n1 && n1 > n3) {
        nums.maior = n2;
        nums.menor = n3;
        nums.meio = n1;
    }

    else if (n2 > n3 && n3 > n1) {
        nums.maior = n2;
        nums.menor = n1;
        nums.meio = n3;
    }

    else if (n3 > n1 && n1 > n2) {
        nums.maior = n3;
        nums.menor = n2;
        nums.meio = n1;
    }

    else if (n3 > n2 && n2 > n1) {
        nums.maior = n3;
        nums.menor = n1;
        nums.meio = n2;
    }

    return nums;
} */
