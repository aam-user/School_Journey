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


}
