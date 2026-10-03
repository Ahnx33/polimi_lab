#include <stdio.h>

int main() {

	/* Richiesto che il numero sia intero positivo */
	int anno = 1;
	int isDigit = 0;

	do{
	isDigit = 0;
	printf("inserisci anno\n");
	isDigit = scanf("%d", &anno);
	if(isDigit != 1){
		printf("Il valore inserito non e' numerico\n");
		int c;
		/* Svuota il buffer di input */
        while ((c = getchar()) != '\n' && c != EOF);
	}
	else if(anno <= 0){
		printf("Anno non valido\n");
	}
	}while(anno <= 0 || isDigit != 1);
	printf("anno bisestile: %s\n", ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0) ? "vero" : "falso");
	return 0;
}
