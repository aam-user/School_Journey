#include <stdio.h>

int main (){
    float scontoPercentuale, importoTotale,  importoSconto;

    printf("Scrivi L'importo Totale ");
    scanf("%f", &importoTotale );
    if (importoTotale<50){
        importoSconto=5.0;
    }else if (importoTotale<65){
        importoSconto=6.0;
    }else if (importoTotale<80){
        importoSconto=7.0;
    }else
        importoTotale = 10.0;
    scontoPercentuale = importoTotale*importoSconto/100;
    importoTotale=importoTotale-scontoPercentuale;
    printf("%f", importoTotale);

}
  