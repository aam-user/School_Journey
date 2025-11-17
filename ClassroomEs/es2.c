#include <stdio.h>
#include <math.h>

int main() {
    int n, somma, cubo, numeropari;

    printf("Quanti numeri pari? ");
    scanf("%d", &n);
    somma = 0;

for (int num = 1; num <= n; num++) {
    numeropari = 2*num;
    cubo = pow(numeropari, 3);
    somma = somma + cubo;
}

    printf("La somma dei cubi è: %d\n", somma);

    return 0;
}
