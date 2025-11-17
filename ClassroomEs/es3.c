#include <stdio.h>

int main (){
	int n, conta, somma;
	float temp, media, min, max;
	printf("Quanti Giorni ha il mese? ");
	scanf("%d", &n);
	somma = 0;
	conta = 0;
	min=temp;
	max=temp;
	while (n>conta){
		printf("Inserisci temperatura del giorno %d : ", conta+1);
		scanf("%f", &temp);
		somma += temp;
		if (conta == 0){
		min=temp;
		max=temp;
		}
		else {
			if (temp>max)
			max=temp;
			if (temp<min)
			min=temp;
		}
		conta++;
	}
	media = (somma / n);
	printf("La Media e : %f\n", media);
	printf("Il Massimo e : %f\n", max);
	printf("Il Minimo e : %f\n", media);
}
