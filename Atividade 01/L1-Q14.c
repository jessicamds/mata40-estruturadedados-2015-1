#include <stdio.h>
int main (){
	float s,a; // s = salario, a = percentual de aumento.
	printf ("Digite o salario base:\n");
	scanf ("%f", &s);
	a = 0.25*s;
	printf ("novo salario: %f\n", s+a);
	return 0;
}