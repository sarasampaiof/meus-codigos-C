#include <stdio.h>

typedef struct {
    float maior;
    float menor;
    float meio;
} MaMeMe;

MaMeMe classifica (float n1, float n2, float n3);

int main() {

    int a, b, c;
    MaMeMe res;

    scanf("%d %d %d", &a, &b, &c);

    res = classifica (a, b, c);

    printf("%.1f %.1f %.1f", res.menor, res.meio, res.maior);

    return 0;
}

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
}
