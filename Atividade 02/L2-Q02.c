#include <stdio.h>

int main() {
	float n1,n2,n3,media;
	
	printf ("Digite a 1� nota\n");
	scanf ("%f", &n1);
	printf ("Digite a 2� nota\n");
	scanf ("%f", &n2);
	printf ("Digite a 3� nota\n");
	scanf ("%f", &n3);
	
	media = (n1+n2+n3)/3;
	
	if (media>=0 && media<3){
		printf ("Reprovado! Mais sorte na proxima.\n");
	}
	if (media>=3 && media<7){
		printf ("Exame! Ainda d� tempo! Voc� precisa de %d para ser aprovado\n", 6.0 - media);
	}
	else{
		printf ("Aprovado! Parab�ns!\n");
	}
	return 0;
}