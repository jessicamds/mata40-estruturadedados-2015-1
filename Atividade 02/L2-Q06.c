#include <stdio.h>

int main() {
	int A, resto;
	printf ("Ola usuario! Vamos verificar se � par ou �mpar\n");
	printf ("Digite um numero\n");
	scanf ("%d", &A);
	resto = A%2;
	if (resto==0){
		printf ("O numero %d � par.\n", A);
	}
	else {
		printf ("O numero %d � �mpar.\n", A);
	}
	return 0;
}