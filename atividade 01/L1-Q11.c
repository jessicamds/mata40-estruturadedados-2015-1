#include <stdio.h>
int main (){
	float gf, gc;
	
	printf ("Digite a temperatura em graus Farenheit\n");
	scanf ("%f", &gf);
	
	gc = (5*(gf - 32))/9;

	printf ("A temperatura em graus Celsius: %f\n", gc);
	return 0;
}