#include <stdio.h>
int main (){
	float s,g,i; // s = salario, g = gratifica��o, i = imposto.
	printf ("Digite o salario base:\n");
	scanf ("%f", &s);
	g = 50.00;
	i = 0.1*s;
	printf ("salario a receber: %f\n", s+g-i);
	return 0;
}