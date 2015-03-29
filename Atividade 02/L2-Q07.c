#include <stdio.h>

int main() {
	int I;
	float A,B,C;
	printf ("Digite um numero\n");
	scanf ("%f", &A);
	printf ("Digite um numero\n");
	scanf ("%f", &B);
	printf ("Digite um numero\n");
	scanf ("%f", &C);
	printf ("Digite um numero\n");
	scanf ("%d", &I);

	switch (I){
		case 1:
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
					else {
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
		break;
		case 2:
			if (B<A){
				A,B = B,A;
				if (C<A){
					A,B,C = C,A,B;
					printf ("Numeros em ordem decrescente: %f, %f, %f\n", A,B,C);
				}
				else{
					if (C<B){
						A,B,C = A,C,B;
						printf ("Numeros em ordem decrescente: %f, %f, %f\n", A,B,C);
					}
					else {
						printf ("Numeros em ordem decrescente: %f, %f, %f\n", A,B,C);
					}
				}
			}
			else{
				if (C<A){
					A,B,C = C,A,B;
					printf ("Numeros em ordem decrescente: %f, %f, %f\n", A,B,C);
				}
				else{
					if (C<B){
						A,B,C = A,C,B;
						printf ("Numeros em ordem decrescente: %f, %f, %f\n", A,B,C);
					}
					else {
						printf ("Numeros em ordem decrescente: %f, %f, %f\n", A,B,C);
					}
			}
			}
		break;
		case 3:
			if (A>B){
				A,B = B,A;
				if (C>B){
					A,B,C = A,C,B;
					printf ("O maior numero esta no meio: %f, %f, %f\n", A,B,C);
				}
				else{
					printf ("O maior numero esta no meio: %f, %f, %f\n", A,B,C);
				}
			}
			else {
				if (C>B){
					A,B,C = A,C,B;
					printf ("O maior numero esta no meio: %f, %f, %f\n", A,B,C);
				}
				else{
					printf ("O maior numero esta no meio: %f, %f, %f\n", A,B,C);
				}
			}
		break;
		
	}
	return 0;
}