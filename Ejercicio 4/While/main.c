#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int edad = 0;
	printf("Ingrese su edad: ");
	scanf("%d",&edad);
	
	while (edad > 0) {
		
		if (edad >= 18) {
			printf("Es mayor de edad\n");
		}
		else {
			printf("Es menor de edad\n");
		}
		
		printf("Ingrese su edad: ");
		scanf("%d",&edad);
	}
	
	return 0;
}
