#include <stdio.h>

int main(){
	int x, y, z;

	printf("Inserisci tre numeri interi(in un singolo input, separati da spazio): ");
	scanf("%d %d %d", &x, &y, &z);

	int min = x, mid = y, max = z;

	int temp;

	if (min > mid){
		temp = min;
		min = mid;
		mid = temp;
	}
	if (min > max){
		temp = min;
		min = max;
		max = temp;
	}
	if (mid > max){
		temp = mid;
		mid = max;
		max = temp;

	}
	printf("Numeri in ordine crescente: %d %d %d\n", min, mid, max);

	int diff = max - min;
	printf("Differenza tra massimo e minimo: %d\n", diff);

	return 0;
}