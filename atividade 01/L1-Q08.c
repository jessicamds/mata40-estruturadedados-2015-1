#include <stdio.h>
int main (){
	float r, pi; //r = raio do circulo.
	pi = 3.141592;

	printf ("Digite o raio do circulo\n");
	scanf ("%f", &r);
	
	printf ("A area do circulo �: %f\n", pi*r*r);
	return 0;
}