#include <stdio.h>
int main() {

    int num, dig, achou=0;

    scanf("%d %d", &num, &dig);

    while (num > 0 && !achou){
        if(num % 10 == dig)
            achou = 1;
        num /= 10;
    }

    if (achou)
        printf("O dígito está presente no número.");


    return 0;
}
