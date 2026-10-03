
#include <stdio.h>
#include <stdlib.h>

int leggi_numero(const char *messaggio, int max);

/* E' chiesto che se i valori in input non sono corretti si esca dal programma */

int main() {

	/* (file - file / 3) * n posti */
	const int max_file = 15;
	const int max_posti = 20;

	int file = leggi_numero("Inserisci il numero di file", max_file);
	int posti = leggi_numero("Inserisci il numero di posti per fila", max_posti);
	int studenti = leggi_numero("Inserisci il numero di studenti", (file - file / 3) * posti);

	for (int i = 1; i <= file; ++i)
	{
		if (i % 3 != 0){
			for (int i = 0; i < posti; ++i)
			{
				printf("X");
			}
		}else{
			for (int i = 0; i < posti; ++i)
			{
				printf("0");
			}
		}
		printf("\n");
	}

	return 0;
}

/*
- In caso di lettura senza successo il programma termina, quindi non c'è bisogno di una lettura ripetuta
- Si restituisce il valore letto
*/
int leggi_numero(const char *messaggio, int max) {
    int valore, isDigit;

    printf("%s (1-%d): ", messaggio, max);
    isDigit = scanf("%d", &valore);
    if (isDigit == EOF){
        printf("Errore inaspettato\n");
        exit(1);
    }
    if (isDigit != 1) {
        printf("Il valore inserito non e' numerico\n");
        exit(1);
    }
	if (!(valore > 0 && valore <= max)){
		printf("Il valore inserito non rientra nel range\n");
		exit(1);
    }

    return valore;
}