#include <stdio.h>
int main (){
	float lq; //lq = lado do quadrado.

	printf ("Digite o lado do quadrado\n");
	scanf ("%f", &lq);
	
	printf ("O dobro da area do quadrado é: %f\n", 2*lq*lq);
	return 0;
}