#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Definicion de variables
	int edad = 0;
		
	//Entrada de datos
	printf("Ingrese su edad: \n");
	
	//Condiciones if else 
	if (scanf("%d", &edad) == 1) {
        if (edad >= 0 && edad <= 4) {
            printf("La edad ingresada es la de un bebe.\n");
        }
        else if (edad >= 5 && edad <= 12) {
            printf("La edad ingresada es la de un ninio.\n");
        }
        else if (edad >= 14 && edad <= 17) {
            printf("La edad ingresada es la de un adolescente.\n");
        }
        else if (edad >= 18 && edad <= 73) {
            printf("La edad ingresada es la de un adulto.\n");
        }
        else if (edad >= 74) {
            printf("La edad ingresada es la de un anciano.\n");
        }
    }
    else {
        printf("ERROR \n");
    }
	
	return 0;
}
