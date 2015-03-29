#include <stdio.h>

int main() {
	int A,B;
	printf ("Digite o primeiro numero\n");
	scanf ("%d", &A);
	printf ("Digite o segundo numero\n");
	scanf ("%d", &B);
	if (A<B){
		printf ("O maior numero é: %d\n", B);
	}
	else{
		printf ("O maior numero é: %d\n", A);
	}
	return 0;
}