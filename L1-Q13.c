#include <stdio.h>
int main (){
	float n1, n2, n3, np1, np2, np3, mediapond;
	int p1, p2, p3;

	printf ("Digite a nota 1\n");
	scanf ("%f", &n1);
	printf ("Digite a nota 2\n");
	scanf ("%f", &n2);
	printf ("Digite a nota 3\n"); 
	scanf ("%f", &n3);
	
	printf ("Digite o peso 1\n");
	scanf ("%f", &p1);
	printf ("Digite o peso 2\n");
	scanf ("%f", &p2);
	printf ("Digite o peso 3\n"); 
	scanf ("%f", &p3);

	np1 = n1*p1;
	np2 = n2*p2;
	np3 = n3*p3;

	mediapond = (np1 + np2 + np3)/(p1+p2+p3);

	printf ("Media: %f\n", mediapond); 
	return 0;
}

	