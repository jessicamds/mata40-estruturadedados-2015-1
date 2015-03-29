#include <stdio.h>

int main() {
	int A,B,C;
	printf ("Usuario, digite o primeiro numero inteiro\n");
	scanf ("%d", &A);
	printf ("Usuario, digite o segundo numero inteiro\n");
	scanf ("%d", &B);
	printf ("Usuario, digite o terceiro numero inteiro\n");
	scanf ("%d", &C);
	
	if (A>B){
		A,B = B,A;
		if (C<A){
			A,B,C = C,A,B;
			printf ("Numeros em ordem crescente: %f, %f, %f\n", A,B,C);
			}
		else{
			if (C>B){
				A,B,C = A,C,B;
				printf ("Numeros em ordem crescente: %f, %f, %f\n", A,B,C);
				}
			else{
				printf ("Numeros em ordem crescente: %f, %f, %f\n", A,B,C);
			}
		}
	}
	else{
		if (C<A){
			A,B,C = C,A,B;
			printf ("Numeros em ordem crescente: %f, %f, %f\n", A,B,C);
			}
		else{
			if (C>B){
				A,B,C = A,C,B;
				printf ("Numeros em ordem crescente: %f, %f, %f\n", A,B,C);
			}
			else{
				printf ("Numeros em ordem crescente: %f, %f, %f\n", A,B,C);
			}
		}
	}
	return 0;
}