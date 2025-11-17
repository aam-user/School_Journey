#include <stdio.h>

int main (){
    int n;
    float media, conta, somma;
    somma=0;
    conta=0.0;
    do
    {
        printf("Scrivi un numero\n");
        scanf("%d", &n);
        if (n!=0)
        {
            conta++;
            somma += n;
        }
        

    } while (n!=0);
    printf("La somma e %f\n", somma);
    media=somma/conta;
    printf("La media e %f\n", media);
}