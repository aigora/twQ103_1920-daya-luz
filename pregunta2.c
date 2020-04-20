#include <stdio.h>
#include <string.h>
#define MAX_USUARIOS 10
#define MAX_PREGUNTAS 20


struct Usuario{
	char nombre[50];
	char password[10];
	int identificador;
};

struct Tema{
	char pregunta[50];
	char respuesta1[50];
	char respuesta2[50];
	char respuesta3[50];
	char respuesta4[50];
};
int usuarios(char opcion);
int temas(char nombre[], struct Tema tipoTema[]);

int main() {
	
	struct Usuario usuario[MAX_USUARIOS];
	struct Tema ciencia[MAX_PREGUNTAS], geografia[MAX_PREGUNTAS], historia[MAX_PREGUNTAS], literatura[MAX_PREGUNTAS];
	char opcion, opcion1, opcion2;
	int opcion3;
	
	system("color 70");
	printf("\tPREGUNTADOOOOOS\n");
	
	do{
		system("cls");
		printf("\t ________________________\n");
		printf("\t|                        |\n");
		printf("\t| A-Registrarse          |\n");
		printf("\t| B-Iniciar partida      |\n");
		printf("\t| C-Resultados           |\n");
		printf("\t| D-Salir                |\n");
		printf("\t|________________________|\n");
		printf("\n\n");
		printf ("Introduce la opcion: \n");
		fflush(stdin);
		scanf("%c", &opcion1);
		
		switch (opcion1){
			case 'A': 
				usuarios('A');
				break;
			case 'B':
				usuarios('B');
				break;
			case 'C':
				printf("Puntuacion final");
				return -1;
			case 'D':
				printf("Fin del juego.\n");
				return -1;
			default:
				printf ("Opcion incorrecta\n");
				break;
		}
	} while(opcion1<'A'||opcion1>'C');
	
	do {
		printf("\t\t\tA-Temas\n");
		printf("\t\t\tB-Informacion\n");
		printf("\t\t\tC-Fin del programa\n");
		printf ("Introduce la opcion: \n");
		fflush(stdin);
		scanf("%c", &opcion2);
		system("cls");
		
		switch (opcion2){
			case 'A':
				do {
					printf("\t\t\t1-Ciencia\n");
					printf("\t\t\t2-Geografia\n");
					printf("\t\t\t3-Historia\n");
					printf("\t\t\t4-Literatura\n");
					printf("\t\t\t5-Vuelta al menu\n");
					printf ("Introduce la opcion: \n");
					fflush(stdin);
					scanf("%d", &opcion3);
					system("cls");
				
					if(opcion3==1){
						printf("\n\n\t\CIENCIA\n\n");
						temas("ciencia", ciencia);
					}
					else if(opcion3==2){
						printf("\n\n\t\tGEOGRAFIA\n\n");
						temas("geografia", geografia);
					}
					else if(opcion3==3){
						printf("\n\n\t\tHISTORIA\n\n");
						temas("historia", historia);
					}
					else if(opcion3==4){
						printf("\n\n\t\tLITERATURA\n\n");
						temas("literatura", literatura);
					}
					else if(opcion3<1||opcion3>5){
						printf("Opcion incorrecta.\n");
					}
				} while(opcion3!=5);
				break;
			case 'B':
				system("cls");
				break;
			case 'C':
				printf("Fin del juego\n");
				system("cls");
				break;
		}
	} while(opcion2!='D');
	system("cls");
}


int usuarios(char opcion){
	FILE *fichero;
	struct Usuario usuario[MAX_USUARIOS];
	int i, j;
	int numUsuarios=0;
	int nombreIgual=0;
	
	fichero = fopen("usuario.txt", "r");
	if (fichero == NULL) {
		printf("No se ha podido abrir el fichero\n");
		return -1; 
	}
	i=0;
	while (fscanf(fichero, "%d %s %s", &usuario[i].identificador, usuario[i].nombre, usuario[i].password)!=EOF) {
		numUsuarios++;
		i++;
	}
	fclose(fichero);
	
	if (opcion=='A'){
		printf("Nombre usuario:\n");
		usuario[i].identificador=i+1;
		fflush(stdin);
		gets(usuario[i].nombre);
		printf("Contrasena usuario:\n");
		fflush(stdin);
		gets(usuario[i].password);
		system("cls");
		for(j=0; j<i; j++){
			for(i=0; i<numUsuarios; i++){
				if(strcmp(usuario[i].nombre, usuario[numUsuarios].nombre)==0||strlen(usuario[numUsuarios].nombre)<2||strlen(usuario[numUsuarios].nombre)>16||
				strlen(usuario[numUsuarios].password)<2||strlen(usuario[numUsuarios].password)>16){
					if(strcmp(usuario[i].nombre, usuario[numUsuarios].nombre)==0){
						printf("Este usuario ya existe, utilice otro:\n\n");
					}
					else if(strlen(usuario[numUsuarios].nombre)<2||strlen(usuario[numUsuarios].nombre)>16||strlen(usuario[numUsuarios].password)<2||
					strlen(usuario[numUsuarios].password)>16){
						printf("Error; el jugador y contrasena tienen que tener una longitud mayor de 2 caracteres y menor de 16, intentelo de nuevo:\n\n");
					}
					printf("Nombre jugador:\n");
					fflush(stdin);
					gets(usuario[numUsuarios].nombre);
					printf("Contrasena jugador:\n");
					fflush(stdin);
					gets(usuario[numUsuarios].password);
					system("cls");
				}
			}
		}
		i++;
		
		fichero = fopen("usuario.txt", "w");

		if (fichero == NULL) {
			printf("No se ha podido abrir el fichero\n");
			return -1;
		}
			
		for(j=0;j<i;j++){
			fprintf(fichero,"%d\t%s\t%s\n", usuario[j].identificador, usuario[j].nombre, usuario[j].password);
		}
			
		fclose(fichero);
	}
	else if(opcion=='B'){
		do{
			printf("Nombre jugador:\n");
			usuario[i].identificador=i+1;
			fflush(stdin);
			gets(usuario[i].nombre);
			printf("Contrasena jugador:\n");
			fflush(stdin);
			gets(usuario[i].password);
			system("cls");
			for(i=0; i<numUsuarios; i++){
				if(strcmp(usuario[i].password, usuario[numUsuarios].password)==0&&strcmp(usuario[i].nombre, usuario[numUsuarios].nombre)==0){
					nombreIgual++;
				}
				system("cls");
			}
			if(nombreIgual==0){
				printf("Nombre jugador o contrasena incorrecta\n\n");
			}
		}while(nombreIgual!=1);
		i++;
	}
}

int temas(char nombre[], struct Tema tipoTema[]){
	FILE *fichero2;
	char ficheroTema[4];
	int i;
	char opcion4;
	
	strcpy(ficheroTema, nombre);
	strcat(ficheroTema, ".txt");
	
	fichero2 = fopen(ficheroTema, "r");
	if(fichero2==NULL){
		printf("No se ha podido abrir el fichero\n");
		return -1;
	}
	
	i=1;
	while(fscanf(fichero2, "\t%s %s %s %s %s", tipoTema[i].pregunta, tipoTema[i].respuesta1, tipoTema[i].respuesta2, tipoTema[i].respuesta3, tipoTema[i].respuesta4)!=EOF){
		printf("\t%s\n", tipoTema[i].pregunta);
		printf("%s\n", tipoTema[i].respuesta1);
		printf("%s\n", tipoTema[i].respuesta2);
		printf("%s\n", tipoTema[i].respuesta3);
		printf("%s\n\n", tipoTema[i].respuesta4);
		fflush(stdin);
		printf("Guarde las respuestas: ");
		scanf("%c", &opcion4);
		i++;
	}
	
	fclose(fichero2);
	
	system("cls");
	
}
