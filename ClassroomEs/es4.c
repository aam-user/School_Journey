#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));
    int min = 1;
    int max = 100;
    int numc = (rand() % (max - min + 1)) + min;
    int n,tent;
    tent=0;
    printf("Scrivi un numero e prova ad indovinare\n");
    do
    {
        scanf("%d", &n);
        if (n>numc)
        {
            printf("Numero e troppo grande\n");
            tent++;
        } else {
            printf("Numero e troppo piccolo\n");
            tent++;
        }
    } while (n!=numc);
    
    printf("Finalmente hai indovinato in %d tentativi\n", tent );

}