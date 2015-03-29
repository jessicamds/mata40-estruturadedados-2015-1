#include <stdio.h>
int main (){
	float m;

	printf ("Digite o valor em metros:\n");
	scanf ("%f", &m);
	
	printf ("O valor em centimetros é: %f\n", m*100);
	return 0;
}