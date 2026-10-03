#include <stdio.h>

int main() {

	/* SHIFT 3 variabili */

	int a, b, c;

	printf("Inserire il valore di a: \n");
	scanf("%d", &a);

	printf("Inserire il valore di b: \n");
	scanf("%d", &b);

	printf("Inserire il valore di c: \n");
	scanf("%d", &c);

	int tmp = c;
	c = b;
	b = a;
	a = tmp;

	printf("Il valore di a e': %d\n", a);
	printf("Il valore di b e': %d\n", b);
	printf("Il valore di c e': %d\n", c);

	return 0;
}
