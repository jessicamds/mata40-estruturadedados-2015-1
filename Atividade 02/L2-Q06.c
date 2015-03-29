#include <stdio.h>

int main() {
	int A, resto;
	printf ("Ola usuario! Vamos verificar se é par ou ímpar\n");
	printf ("Digite um numero\n");
	scanf ("%d", &A);
	resto = A%2;
	if (resto==0){
		printf ("O numero %d é par.\n", A);
	}
	else {
		printf ("O numero %d é ímpar.\n", A);
	}
	return 0;
}