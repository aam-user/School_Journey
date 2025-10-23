#include <stdio.h>

int main(){
    int num, conta;
    printf("inserisci un numero : \n");
    scanf("%d", &num);
    conta = 0;
    while (conta<num){
        printf("%d\n", conta);
        conta = conta+1;
    }

}
