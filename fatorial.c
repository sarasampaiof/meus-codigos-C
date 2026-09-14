#include <stdio.h>
int main() {

    int num, fat=1, i=0;
  
    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++)
        fat = (fat * i);

    printf("%d", fat);

    return 0;
}
