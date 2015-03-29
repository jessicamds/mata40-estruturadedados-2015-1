#include <stdio.h>
#include <math.h>

int main() {
	int c,a, b;

	printf ("Ola Usuario! Vamos calcular!\n");
	printf ("Digite '1' para somar dois numeros.\n");
	printf ("Digite '2' para subtrair dois numeros.\n");
	printf ("Digite '3' para multiplicar dois numeros.\n");
	printf ("Digite '4' para dividir dois numeros.\n");
	printf ("Digite '5' para calcular a raiz de um numero.\n");
	
	printf ("Digite a opção desejada\n");
	scanf ("%d", &c);
	
	switch (c){
		case 1:
			printf ("Digite o 1º numero:\n");
			scanf ("%d", &a);
			printf ("Digite o 2º numero:\n");
			scanf ("%d", &b);
			printf ("O resultado é: %d\n", a+b);
		break;
		case 2:
			printf ("Digite o 1º numero:\n");
			scanf ("%d", &a);
			printf ("Digite o 2º numero:\n");
			scanf ("%d", &b);
			printf ("O resultado é: %d\n", a-b);
		break;
		case 3:
			printf ("Digite o 1º numero:\n");
			scanf ("%d", &a);
			printf ("Digite o 2º numero:\n");
			scanf ("%d", &b);
			printf ("O resultado é: %d\n", a*b);
		break;
		case 4:
			printf ("Digite o 1º numero:\n");
			scanf ("%d", &a);
			printf ("Digite o 2º numero:\n");
			scanf ("%d", &b);
			printf ("O resultado é: %d\n", a/b);
		break;
		case 5:
			printf ("Digite o numero:\n");
			scanf ("%d", &a);
			printf ("O resultado é: %d\n", sqrt(a));
		break;
		default:
			printf ("Opção inválida! Digite um numero de 1 a 5!\n");
	}
	return 0;
}