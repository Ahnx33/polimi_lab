#include <stdio.h>

/*
per controllare se un numero contiene il bit specifico,
utilizzo una divisione continua per 2, come nella conversione (cioè (n / bit) % 2 = 1)
*/

int main() {
	printf("Ciao! Scommetti che indovinero' il giorno del tuo compleanno?\n");
	printf("Ti verranno mostrate 5 serie di numeri.\nRispondi 1 se il numero e' a schermo, 0 altrimenti.\n");
	printf("Buon divertimento!!\n\n");

	int guess = 0;
	int addNumber;

	/* il for va direttamente a potenza per non usare la libreria math */
	for (int bit = 1; bit <= 16; bit *= 2) {
		for (int day = 1; day <= 31; ++day) {
			if ((day / bit) % 2 == 1) {
				printf("%d ", day);
			}
		}
		printf("\n");

		/* La lettura e' unica. In caso di valore non valido il programma si interrompe, come chiesto */

		printf("Valore presente? --> ");
		int esito = scanf("%d", &addNumber);
		if (esito == EOF) {
			printf("Errore inaspettato.\n");
			return 1;
		}
		if (esito != 1) {
			printf("Il valore inserito non e' numerico.\n");
			return 1;
		}
		if (addNumber != 0 && addNumber != 1) {
			printf("Il valore inserito non e' valido.\n");
			return 1;
		}

		if (addNumber == 1) {
			guess += bit;
		}
	}

	printf("Il tuo compleanno e' il %d!\n", guess);
	return 0;
}