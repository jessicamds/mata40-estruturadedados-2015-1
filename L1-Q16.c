#include <stdio.h>
int main (){
	float s,g,i; // s = salario, g = gratificação, i = imposto.
	printf ("Digite o salario base:\n");
	scanf ("%f", &s);
	g = 0.05*s;
	i = 0.07*s;
	printf ("salario a receber: %f\n", s+g-i);
	return 0;
}