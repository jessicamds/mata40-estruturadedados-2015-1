#include <stdio.h>
int main (){
	int d1,m1,a1,d2,m2,a2;
	
	printf ("Vamos digitar a 1ª data\n");
	printf ("Digite o dia\n");
	scanf ("%d", &d1);
	printf ("Digite o mês\n");
	scanf ("%d", &m1);
	printf ("Digite o ano\n");
	scanf ("%d", &a1);

	printf ("Atenção! Digite a 2ª data\n");
	printf ("Digite o dia\n");
	scanf ("%d", &d2);
	printf ("Digite o mês\n");
	scanf ("%d", &m2);
	printf ("Digite o ano\n");
	scanf ("%d", &a2);
	
	if (a1>a2){
		printf ("A Maior data é: %d - %d - %d\n", d1,m1,a1);
	}
	
	if (a1==a2){
		if (m1>m2){
			printf ("A Maior data é: %d - %d - %d\n", d1,m1,a1);}
		if (m1==m2){
			if (d1>d2){
				printf ("A Maior data é: %d - %d - %d\n", d1,m1,a1);}
			if (d1<d2){
				printf ("A Maior data é: %d - %d - %d\n", d2,m2,a2);}
			else{
				printf ("Não Existe maior data! São iguais!");
				}
		}
		else {
			printf ("A Maior data é: %d - %d - %d\n", d2,m2,a2);}
	}	
			 
	else{
		printf ("A Maior data é: %d - %d - %d\n", d2,m2,a2);
	}

	return 0;
}
 