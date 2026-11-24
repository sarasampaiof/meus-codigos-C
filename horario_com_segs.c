#include <stdio.h>

void segundosParaHMS (int total_segundos, int *h, int *m, int *s);

int main() {
    
    int segundos;
    int hora, min, seg;
    
    printf("Digite o valor, em segundos, a ser convertido: ");
    scanf("%d", &segundos);

    segundosParaHMS (segundos, &hora, &min, &seg);
    
    return 0;
}

void segundosParaHMS (int total_segundos, int *h, int *m, int *s) {
    
    *h = total_segundos / 3600; // calcula as horas
    total_segundos %= 3600; // pega o resto da div por 3600 p/ usar apenas esse valor restante p/ poder calcular mins e segs
    *m = total_segundos / 60; // calcula os mins
    *s = total_segundos % 60; // calcula os segs (c/ o que sobrou dos mins)

    printf("Horário: %d:%d:%d", *h, *m, *s);
}
