#include <stdio.h>
int main (){
	float s, a, va, ns; //s=salario, a=percentual de aumento, va=valor do aumento, ns=novo salario;
	printf ("digite o salario\n");
	scanf ("%f", &s);
	printf ("digite o percentual de aumento\n");
	scanf ("%f", &a);
	va = (a/100)*s;
	ns = s+va;
	printf ("valor do aumento: %f\n", va);
	printf ("novo salario: %f\n", ns);
	return 0;
}
