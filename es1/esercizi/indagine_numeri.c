#include <stdio.h>

int leggi_numero(const char *messaggio, int *variabile);

int main() {

	/*
	Chiesti 2 numeri x e y, determinare:
	- xy % 2 = 0 senza moltiplicarli
	- x % y = 0
	- max(x,y)/ugulai
	- coordinata piano cart. (quadrante o asse)
	*/

	int x = 0, y = 0, isDigit = 0;

	leggi_numero("Inserisci il numero x: ", &x);
	leggi_numero("Inserisci il numero y: ", &y);

	printf("x: %d; y: %d;\n", x, y);
	(x % 2 == 0 || y % 2 == 0) ? printf("Il prodotto e' pari!\n") : printf("Il prodotto e' dispari!\n");
	(x % y == 0) ? printf("x e' multiplo di y\n") : printf("x non e' multiplo di y\n");
	(x - y == 0) ? printf("x = y\n") : (x - y > 0)? printf("x > y\n") : printf("x < y\n");

	if (x > 0) {
	    if (y == 0) {
	        printf("asse x\n");
	    } else if (y > 0) {
	        printf("primo quadrante\n");
	    } else {
	        printf("quarto quadrante\n");
	    }
	} else if (x < 0) {
	    if (y == 0) {
	        printf("asse x\n");
	    } else if (y > 0) {
	        printf("secondo quadrante\n");
	    } else {
	        printf("terzo quadrante\n");
	    }
	} else {
	    if (y == 0) {
	        printf("origine\n");
	    } else {
	        printf("asse y\n");
	    }
	}

	return 0;
}

/* Il valore è dato per riferimento, e si restituise l'esito */
int leggi_numero(const char *messaggio, int *variabile) {
    int isDigit;

    do {
        printf("%s", messaggio);
        isDigit = scanf("%d", variabile);
        if (isDigit == EOF){
        	printf("Errore inaspettato");
        	return 0;
        }
        if (isDigit != 1) {
            printf("Il valore inserito non e' numerico!\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
    } while (isDigit != 1);

    return 1;
}