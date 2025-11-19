#include <stdio.h>
int div (int n1, int n2){
	//corpo della funzione
	int s;
	s=n1/n2; //return = n1+n2
	return s;
}
int molt (int n1, int n2){
	//corpo della funzione
	int s;
	s=n1*n2; //return = n1+n2
	return s;
}
int sott (int n1, int n2){
	//corpo della funzione
	int s;
	s=n1-n2; //return = n1+n2
	return s;
}
int somma (int n1, int n2){
	//corpo della funzione
	int s;
	s=n1+n2; //return = n1+n2
	return s;
}
int main (){
	int som,sot,divi,mol, x, y, num;
	printf("scrivi il primo numero\n");
	scanf("%d", &x);
	printf("scrivi il secondo numero\n");
	scanf("%d", &y);
	som=somma(x,y);
	printf("Somma %d\n", som);
	mol=molt(x,y);
	printf("Moltiplicazione %d\n", mol);
	divi=div(x,y);
	printf("Divizione %d\n", divi);
	sot=sott(x,y);
	printf("Sottrazione %d\n", sot);
}
