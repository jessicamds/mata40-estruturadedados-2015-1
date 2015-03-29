#include <stdio.h>

int main() {
	float av1, av2, av3, n1, n2, n3, media;
	int p1, p2, p3, tp;
	
	printf ("Digite a nota do trabalho de laboratório\n");
	scanf ("%f", &av1);
	printf ("Digite a nota da avaliação semestral\n");
	scanf ("%f", &av2);
	printf ("Digite a nota do exame final\n");
	scanf ("%f", &av3);

	p1=2;
	p2=3;
	p3=5;
	
	n1 = av1*p1;
	n2 = av2*p2;
	n3 = av3*p3;
	
	tp = p1+p2+p3;
	
	media = (n1+n2+n3)/tp;
	
	if (media<=10 && media>=8){
		printf ("Media igual a %f, Conceito A\n", media);
	}
	if (media<8 && media>=7){
		printf ("Media igual a %f, Conceito B\n", media);
	}
	if (media<7 && media>=6){
		printf ("Media igual a %f, Conceito C\n", media);
	}
	if (media<6 && media>=5){
		printf ("Media igual a %f, Conceito D\n", media);
	}
	else{
		printf ("Media igual a %f, Conceito E\n", media);
	}
	return 0;
}