#include <stdio.h>
int main (){
	float gph; //gph = ganha por hora.
	int ht; // ht = horas trabalhadas.
	
	printf ("Digite o ganho por hora\n");
	scanf ("%f", &gph);
	
	printf ("Digite o numero de horas trabalhadas no mês\n");
	scanf ("%d", &ht);

	printf ("O salario do mês: %f\n", gph*ht);
	return 0;
}