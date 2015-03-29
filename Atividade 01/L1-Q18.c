#include <stdio.h>
int main(){
	int b,h; //b=base, h=altura
	float area;
	printf ("Vamos calcular a area do triangulo\n");
	printf ("Digite a base\n");
	scanf ("%d", &b);
	printf ("Digite a altura\n");
	scanf ("%d", &h);
	area = (b*h)/2;
	printf ("a area do triangulo é %f\n", area);
	return 0;
}
