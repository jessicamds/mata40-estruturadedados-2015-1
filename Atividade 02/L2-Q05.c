#include <stdio.h>
int main() {
	int a,b,c,x;
	printf ("Digite um numero.\n");
	scanf ("%d", &a);
	printf ("Digite um segundo numero.\n");
	scanf ("%d", &b);
	while (b<a){
		printf ("Usuario, digite um numero menor que %d.\n", a);
		scanf ("%d", &b);
	}
	printf ("Digite o terceiro numero.\n");
	scanf ("%d", &c);
	while (c<b){
		printf ("Usuario, digite um numero menor que %d.\n", b);
		scanf ("%d", &c);
	}
	printf ("Digite o quarto numero, qualquer inteiro.\n");
	scanf ("%d", &x);
	if (x<a){
		printf ("Os quatro numeros em ordem decrescente são: %d,%d,%d,%d\n", x,a,b,c);
	}
	if (x<b){
		printf ("Os quatro numeros em ordem decrescente são: %d,%d,%d,%d\n", a,x,b,c);
	}
	if (x<c){
		printf ("Os quatro numeros em ordem decrescente são: %d,%d,%d,%d\n", a,b,x,c);
	}
	else {
		printf ("Os quatro numeros em ordem decrescente são: %d,%d,%d,%d\n", a,b,c,x);
	}
}