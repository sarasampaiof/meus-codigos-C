#include <stdio.h>
int main () {
    int foo=150, bar=110, anos=0; // alturas em cm
    
    while (foo >= bar) { // condição de continuar
        foo+=2;
        bar+=3;
        anos++;
    }
    printf("Foram necessários %d anos para que Barano ultrapassasse Foolano em sua altura.\n", anos);
    printf("Foolano agora tem %.2fm de altura, enquanto Barano mede %.2fm.", (float)foo / 100, (float)bar / 100); // 'm' de 'metros'
    return 0;
}
