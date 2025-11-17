#include <stdio.h>

int main() {
    int estremo1, estremo2, cont, max, min;

    printf("Inserisci il primo estremo: \n");
    scanf("%d", &estremo1);
    printf("Inserisci secondo estremo: \n");
    scanf("%d", &estremo2);

    if (estremo1 > estremo2) {
        min = estremo2;
        max = estremo1;
    } else {
        min = estremo1;
        max = estremo2;
    }

    cont = 0;

    printf("\nNumeri pari compresi tra %d e %d:\n", min, max);

    while (min <= max) {
        if (min % 2 == 0) {
            printf("%d\n", min);
            cont++;
        }
        min++;
    }

    printf("\nTotale numeri pari: %d\n", cont);

    return 0;
}
