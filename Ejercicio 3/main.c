#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int numero;
	
	printf("Introduzca un numero entero: \n");
	scanf("%d", &numero);
	
	if (numero %2 == 0)
		printf("El numero es un numero par");
	else
		printf("El numero es un numero impar");
		
	return 0;
}
