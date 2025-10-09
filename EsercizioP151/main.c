#include <stdio.h>
#include <math.h>

int main (){
    int num1,num2,num3,media,n1,n2,n3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    if (num1<0)
        num1 = num1 * (-1);
    if (num2<0)
        num2 = num2 * (-1);
    if (num3<0)
        num3 = num3 * (-1);
    else {
        media = (num1+num2+num3)/3;
        printf("La media e %d\n", media);
    }

    if (num1 % 2 ==0)
        printf("Il numero e pari :%d\n",num1);
    else
        printf("Il numero e dispari :%d\n", num1);
    if (num2 % 2 ==0)
        printf("Il numero e pari :%d\n", num2);
    else
        printf("Il numero e dispari :%d\n", num2);
    if (num3 % 2 ==0)
        printf("Il numero e pari :%d\n", num3);
    else
        printf("Il numero e dispari :%d\n", num3);

}
