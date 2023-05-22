#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int seleccion = 0;
	

	printf("Seleccione su pais de residencia: \n 1.Argentina \n 2.Brasil \n 3.Uruguay \n");
	scanf("%d",&seleccion);
		
	switch(seleccion){
		case 1:
			printf("Usted selecciono Argentina \n");
			break;
		case 2:
			printf("Usted selecciono Brasil \n");
			break;
		case 3:
			printf("Usted selecciono Uruguay \n");
			break;
					
		default:
		printf("Usted no ha seleccionado ningun pais \n");
	}
		
				
	return 0; 
}
