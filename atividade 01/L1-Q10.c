#include <stdio.h>
int main (){
	float gph; //gph = ganha por hora.
	int ht; // ht = horas trabalhadas.
	
	printf ("Digite o ganho por hora\n");
	scanf ("%f", &gph);
	
	printf ("Digite o numero de horas trabalhadas no m�s\n");
	scanf ("%d", &ht);

	printf ("O salario do m�s: %f\n", gph*ht);
	return 0;
}