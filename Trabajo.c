#include <stdio.h>

int main() {
	char opcion;
	
	system("color 60");
	printf("\t\tPREGUNTA2\n\n");
	
	do{
		printf("\t _________________________\n");
		printf("\t|                         |\n");
		printf("\t| A. Registrar jugadores  |\n");
		printf("\t| B. Iniciar sesion       |\n");
		printf("\t| C. Resultados           |\n");
		printf("\t| D. Salir                |\n");
		printf("\t|_________________________|\n");
		printf("\n\n");
		printf ("Introduce la opcion: \n");
		fflush(stdin);
		scanf("%c", &opcion);
		
		switch (opcion){
			case 'A': 
				break;
			case 'B':
				break;
			case 'C':
				break;
			case 'D':
				printf("Fin.\n");
				return -1;
			default:
				printf ("Opcion incorrecta\n");
				break;
		}
	} while(opcion<'A'||opcion>'D');
}
	
