#include <stdio.h>

int askNumber(int *num, int *den);

int main(){
	// due frazioni positive A e B
	int num_a, den_a, num_b, den_b;
	int ask = 0;

	do{
		ask = askNumber(&num_a, &den_a);
	}while(ask);

	do{
		ask = askNumber(&num_b, &den_b);
	}while(ask);

	int dsomma = den_a * den_b;
	int nsomma = num_a * dsomma / den_a + num_b * dsomma / den_b;

	printf("La somma e': %d/%d\n", nsomma, dsomma);

	return 0;
}

// returns whether to ask the number again or not
int askNumber(int *num, int *den) {
	printf("inserisci una frazione positiva nel formato n/d: ");
	scanf("%d/%d", num, den);
	int ask = 0;
 	if(*den == 0 || (*num)*(*den) < 0){
 		printf("Warning: Frazione NON VALIDA!!!\n");
 		ask = 1;
 	}
 	return ask;
}