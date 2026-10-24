#include <stdio.h>
int main () {
    
    int min, max, valor, maior, menor, cont=0;
    
    printf("Digite valores de mínima e máxima, respectivamente: ");
    scanf("%d %d", &min, &max);
    printf("Digite o primeiro valor (valor negativo p/ sair): ");
    scanf("%d", &valor);

    while (valor >= 0) { // enquanto valor for positivo, faça:
        if (valor >= min && valor <= max) { // valores dentro da faixa
            if (cont == 0) { // ou seja, se estiver lendo o primeiro valor dentro da faixa, pois a var cont ainda não terá sido iniciada
            maior = valor; 
            menor = valor;
            // o valor será atribuído às vars maior e menor, pois ainda é o único num conhecido
            }
            else { // se não for mais a primeira verificação
                if (valor < menor)
                    menor = valor;
                if (valor > maior)
                    maior = valor;
            }
            cont++;
        }
        scanf("%d", &valor); // lê próximo valor no  final do loop
    }
    
    if (cont > 0) // ou seja, se há valor(es) dentro da faixa
        printf("Há %d valores dentro da faixa, sendo %d o maior e %d o menor, respectivamente.", cont, maior, menor);
    else
        printf("Erro! Não há valores dentro da faixa.");
    
    return 0;
}
