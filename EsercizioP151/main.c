#include <stdio.h>
#include <math.h>

int main (){
    int num1,num2,num3,num4,num5,media,n1,n2,n3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    scanf("%d", &num5);
    
    if (num1<0)
        num1 = num1 * (-1);
    if (num2<0)
        num2 = num2 * (-1);
    if (num3<0)
        num3 = num3 * (-1);
    if (num4<0)
        num4 = num4 * (-1);
    if (num5<0)
        num5 = num5 * (-1);
    else {
        media = (num1+num2+num3+num4+num5)/5;
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
    if (num4 % 2 ==0)
        printf("Il numero e pari :%d\n",num4);
    else
        printf("Il numero e dispari :%d\n", num4);
	if (num5 % 2 ==0)
        printf("Il numero e pari :%d\n",num5);
    else
        printf("Il numero e dispari :%d\n", num5);	
}
