#include <stdio.h>
#include <string.h>
#define MAX 10

struct Jugador{
	char nombre[50];
	char contrasena[10];
	int numerador;
};

int jugadores(char opcion);
void presentacion();
void menu1();
void menu2();
void menu3();

int main() {
	
	char opcion1, opcion2, letra;
	int opcion3, suma=0;
	int contador1=0, contador2=0, contador3=0, contador4=0;
	
	system("color 60");
	
	
	do{
		system("cls");
		presentacion();
		menu1();
		printf ("\t\tEscoge una opcion: \n");
		fflush(stdin);
		scanf("%c", &opcion1);
		
		switch (opcion1){
			case 'A': 
				jugadores('A');
				break;
			case 'B':
				jugadores('B');
				break;
			case 'C':
				printf("Adios. Esperamos volver a verte.\n");
				return -1;
			default:
				printf ("La opcion es incorrecta.\n");
				break;
		}
	} while(opcion1<'A' || opcion1>'C');
		
	do {
		menu2();
		printf ("Escoge una opcion: \n");
		fflush(stdin);
		scanf("%c", &opcion2);
		system("cls");
		
		switch (opcion2){
			case 'A':
				do {
					menu3();
					printf ("Introduce la opcion: \n");
					fflush(stdin);
					scanf("%d", &opcion3);
					system("cls");
	
		            if(opcion3==1){//CIENCIA
						printf("\n\t1. Cual de las enfermedades ataca al higado\n");
		               	printf("A. Hepatitis\n");
		               	printf("B. Diabetes\n");  
		               	printf("C. Cifoescoliosis\n");
		               	printf("D. Artrosis\n");
						scanf("%c", &letra);
		                    if(letra=='A'){
		                      	printf("Respuesta correcta.\n");
		                        	contador1+=5;
								}
							else{
								printf("Respuesta incorrecta.\n");
								}
		                printf("\n\t2. Que cambio de estado ocurre en la sublimacion\n");
		                printf("A. De solido a liquido\n");
		                printf("B. De solido a gaseoso\n");
	                    printf("C. De gaseoso a liquido\n");
		                printf("D. De liquido a solido\n");
						scanf("%c", &letra);
		               		if(letra=='B'){
		                       	printf("Respuesta correcta.\n");
		                  		contador1+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
		                        
		                printf("\n\t3. Con que otro nombre se conoce el ciclo del agua?\n");
		       			printf("A. Ciclo natural\n");
		                printf("B. Ciclo hidroponico\n");
		                printf("C. Ciclo hidrologico\n");
		                printf("D. Ciclo acuoso\n"); 
						scanf("%c", &letra);
			            	if(letra=='C'){
			                   	printf("Respuesta correcta.\n");
		                        contador1+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
								
		               	printf("\n\t4. Que es lo que transforma la leche en yogur?\n");
		                printf("A. Un virus\n");
		                printf("B. Un musgo\n");
		                printf("C. Una bacteria\n");
		                printf("D. El tiempo\n"); 
						scanf("%c", &letra);
		                    if(letra=='D'){
		                       	printf("Respuesta correcta.\n");
		                       	contador1+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
		                        
		                printf("\n\t5. Como se llama a los electrones que se encuentran en la ultima capa del atomo\n");
		                printf("A. Isotopos\n");
		            	printf("B. Iones\n");
		                printf("C. Electrones\n");
		                printf("D. Electrones de valencia\n"); 
						scanf("%c", &letra);
		                    if(letra=='D'){
		                      	printf("Respuesta correcta.\n");
		                        contador1+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
		                printf("\nPuntuacion: %d\n",contador1);
		                system("cls");
		                system("PAUSE");
					}

					else if(opcion3==2){//GEOGRAFIA
						printf("\n\t1. Cual es el pais menos turistico de Europa\n");
		                printf("A. Armenia\n");
		                printf("B. Moldavia\n");
		                printf("C. Liechtenstein\n");
		                printf("D. Hungria\n"); 
						scanf("%c", &letra);
		                    if(letra=='C'){
		                        printf("Respuesta correcta.\n");
		                        contador2+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
								}
		    
		                printf("\n\t2. A que pais pertenece la isla de Tasmania\n");
		                printf("A. Estados Unidos\n");
		                printf("B. Australia\n");
		                printf("C. Portugal\n");
		                printf("D. Ninguna es correcta\n"); 
						scanf("%c", &letra);
		                    if(letra=='B'){
								printf("Respuesta correcta.\n");
		                        contador2+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
									     
		                printf("\n\t3. En cual de los siguientes paises NO hay ningun desierto\n");
		                printf("A. España\n");
		                printf("B. Chile\n");
		                printf("C. Mongolia\n");
		                printf("D. Alemania\n"); 
						scanf("%c", &letra);
		                	if(letra=='D'){
								printf("Respuesta correcta.\n");
		                       	contador2+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}

		                printf("\n\t4. Cual es el codigo internacional para Cuba\n");
		                printf("A. CA\n");
		                printf("B. CU\n");
		                printf("C. CB\n");
		                printf("D. Ninguna es correcta\n"); 
						scanf("%c", &letra);
		                    if(letra=='B'){
								printf("Respuesta correcta.\n");
		                        contador2+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
							
		                printf("\n\t5.Cual es la capital del estado de Arkansas\n");
		                printf(" A. Kansas \n");
		                printf(" B. Little Rock\n");
		                printf(" C. Hot Springs \n");
		                printf(" D. Washington  \n"); 
						scanf("%c", &letra);
		                    if(letra=='B'){
								printf("Respuesta correcta.\n");
		                       	contador2+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
						printf("\nPuntuacion: %d\n",contador2);
						system("cls");
		                system("PAUSE");
					}
		            
					else if(opcion3==3){//HISTORIA

						printf("\n\t1. En que anio tuvo lugar el ataque a Pearl Harbor\n");
		                printf("A. 1939\n");
		                printf("B. 1940\n");
		                printf("C. 1941\n");
		                printf("D. 1942\n"); 
						scanf("%c", &letra);
		                    if(letra=='C'){
		                      	printf("Respuesta correcta.\n");
		                        contador3+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}

		                printf("\n\t2. Las revueltas de donde son llamadas Intifadas\n");
		                printf("A. Montenegro\n");
		                printf("B. Kosovo\n");
		                printf("C. Palestina\n");
		                printf("D. Chechenia\n"); 
						scanf("%c", &letra);
		                    if(letra=='C'){
		                        printf("Respuesta correcta.\n");
		                       	contador3+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
								}
		                        
		                printf("\n\t3. La Comuna de Paris fue un movimiento...\n");
		                printf("A. Del mayo del 68\n");
		                printf("B. Hippie de los años 60\n");
		                printf("C. Insurreccional autogestionario del XIX\n");
		                printf("D. De la revolucion francesa\n"); 
						scanf("%c", &letra);
		                    if(letra=='C'){
		                       	printf("Respuesta correcta.\n");
		                       	contador3+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
		                
		                printf("\n\t4. A que dirigente latinoamericano mando callar Juan Carlos de Borbon\n");
		                printf("A. Evo Morales\n");
		                printf("B. Fidel Castro\n");
		                printf("C. Hugo Chavez\n");
		                printf("D. Rafael Correa\n"); 
						scanf("%c", &letra);
		                    if(letra=='C'){
		                        printf("Respuesta correcta.\n");
		                       	contador3+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
		                        
		                printf("\n\t5. Quienes fueron los sans-culottes de la Revolucion Francesa\n");
		                printf("A. La burguesia durante la Revolucion\n");
		                printf("B. La principal masa social revolucionaria\n");
		                printf("C. El nombre despectivo de los burgueses\n");
		                printf("D. Ninguna es correcta \n"); 
						scanf("%c", &letra);
		                    if(letra=='B'){
		                       	printf("Respuesta correcta.\n");
		                    	contador3+=5;
							}
							else{
								printf("Respuesta correcta.\n");
							}
						printf("\nPuntuacion: %d\n",contador3);
						system("cls");
						system("PAUSE");
					}
						
					else if(opcion3==4){//LITERATURA
						printf("\n\t1. A que genero pertenece la novela, La historia del ojo, de George Bataille\n");
		                printf("A. Ciencia-ficcion\n");
		                printf("B. Negro\n");
		                printf("C. Romantico\n");
		                printf("D. Erotico\n"); 
						scanf("%c", &letra);
		                    if(letra=='D'){
		                        printf("Respuesta correcta.\n");
		                       	contador4+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
		                        
		                printf("\n\t2. Cual de los siguientes artistas es una figura clave del dadaismo y el surrealismo\n");
		                printf("A. Max Ernst\n");
		                printf("B. Claude Monet\n");
		                printf("C. Vicent Van Gogh\n");
		                printf("D. Rafael\n"); 
						scanf("%c", &letra);
		                    if(letra=='A'){
		                        printf("Respuesta correcta.\n");
		                        contador4+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}

		                printf("\n\t3. Que profesion tenia Hercules Poiriot en las novelas de Agatha Christie\n");
		                printf("A. Policia\n");
		                printf("B. Medico\n");
		                printf("C. Detective\n");
		                printf("D. Paul Verlaine\n"); 
						scanf("%c", &letra);
		                    if(letra=='C'){
		                       	printf("Respuesta correcta.\n");
		                        contador4+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}

		                printf("\n\t4. Quien es el autor de la obra teatral Casa de Muñecas\n");
		                printf("A. Henrik Ibsen\n");
		                printf("B. Isaac Asimov\n");
		                printf("C. Emile Zola\n");
		                printf("D. Sigrid Undset\n"); 
						scanf("%c", &letra);
		                    if(letra=='A'){
		                      	printf("Respuesta correcta.\n");
		                       	contador4+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
							
		                printf("\n\t5. Que cosa perdida buscaba Marcel Proust\n");
		                printf("A. El amor\n");
		                printf("B. La fortuna\n");
		                printf("C. La existencia\n");
		                printf("D. El tiempo\n");
						scanf("%c", &letra);
		                	if(letra=='D'){
								printf("Respuesta correcta.\n");
		                        contador4+=5;
							}
							else{
								printf("Respuesta incorrecta.\n");
							}
						
						printf("\nPuntuacion: %d\n", contador4);
						system("cls");
						system("PAUSE");
					}
					else if(opcion3<1||opcion3>5){
						printf("Ha introducido una opcion incorrecta. Vuelva a intertarlo\n");
					}
				} while(opcion3!=5);
				suma=contador1+contador2+contador3+contador4;
				break;
		case 'B':
			printf("\n\t\tUsted ha obtenido %d puntos\n", suma);
			if(suma<=25){
				printf("\nSu puntuacion es BAJA. Puede esforzarse un poco mas.\n");
			}
			else if(suma>25 && suma<=50){
				printf("\n\t\tSu puntuacion es MEDIA. Puede mejorar.\n");
			}
			else if(suma>50 && suma<=75){
				printf("\n\t\tSu puntuacion es ALTA. Puede hacerlo mejor.\n");
			}
			else if(suma>75 && suma<=100){
				printf("\n\t\tSu puntuacion es MUY ALTA. Lo hace genial.\n");
			}
			system("PAUSE");
			system("cls");
		case 'C':
			printf("\t\tGAME OVER\n");
			break;
		}
	}while(opcion2!='C');
	system("cls");		
}

int jugadores(char opcion){
	FILE *fichero;
	struct Jugador jugador[MAX];
	int i, j;
	int numJugador=0;
	int nombreIgual=0;
	
	fichero = fopen("usuario.txt", "r");
	if (fichero == NULL) {
		printf("No se ha podido abrir el fichero\n");
		return -1; 
	}
	i=0;
	while (fscanf(fichero, "%d %s %s", &jugador[i].numerador, jugador[i].nombre, jugador[i].contrasena)!=EOF) {
		numJugador++;
		i++;
	}
	fclose(fichero);
	
	if (opcion=='A'){
		printf("\t\tNombre usuario:\n");
		jugador[i].numerador=i+1;
		fflush(stdin);
		gets(jugador[i].nombre);
		printf("\t\tContrasena usuario:\n");
		fflush(stdin);
		gets(jugador[i].contrasena);
		system("cls");
		for(j=0; j<i; j++){
			for(i=0; i<numJugador; i++){
				if(strcmp(jugador[i].nombre, jugador[numJugador].nombre)==0||strlen(jugador[numJugador].nombre)<2||strlen(jugador[numJugador].nombre)>16||
				strlen(jugador[numJugador].contrasena)<2||strlen(jugador[numJugador].contrasena)>16){
					if(strcmp(jugador[i].nombre, jugador[numJugador].nombre)==0){
						printf("\tEste usuario ya existe, utilice otro:\n\n");
					}
					else if(strlen(jugador[numJugador].nombre)<2||strlen(jugador[numJugador].nombre)>16||strlen(jugador[numJugador].contrasena)<2||
					strlen(jugador[numJugador].contrasena)>16){
						printf("\tError! La longitud debe de estar entre 2 y 16 caracteres\n\n");
					}
					printf("\t\tNombre jugador:\n");
					fflush(stdin);
					gets(jugador[numJugador].nombre);
					printf("\t\tContrasena jugador:\n");
					fflush(stdin);
					gets(jugador[numJugador].contrasena);
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
			fprintf(fichero,"%d\t%s\t%s\n", jugador[j].numerador, jugador[j].nombre, jugador[j].contrasena);
		}
			
		fclose(fichero);
	}
	else if(opcion=='B'){
		do{
			printf("\t\tNombre jugador:\n");
			jugador[i].numerador=i+1;
			fflush(stdin);
			gets(jugador[i].nombre);
			printf("\t\tContrasena jugador:\n");
			fflush(stdin);
			gets(jugador[i].contrasena);
			system("cls");
			for(i=0; i<numJugador; i++){
				if(strcmp(jugador[i].contrasena, jugador[numJugador].contrasena)==0 && strcmp(jugador[i].nombre, jugador[numJugador].nombre)==0){
					nombreIgual++;
				}
				system("cls");
			}
			if(nombreIgual==0){
				printf("\t\tNombre jugador o contrasena incorrecta\n\n");
			}
		}while(nombreIgual!=1);
		i++;
	}
}

void presentacion(){
	
	printf("\t\t*****  *****  ****** ****** **  ** ***   ** ******   **    *****\n");
	printf("\t\t**   * **   * **     **     **  ** ** *  **   **   **  ** **  **\n");
	printf("\t\t*****  *****  ****** ****** **  ** **  * **   **   ******    **\n"); 
	printf("\t\t**     ** **  **     **  ** **  ** **   ***   **   **  **   **\n");
	printf("\t\t**     **  ** ****** ****** ****** **    **   **   **  ** ******\n\n");
	
}

void menu1(){
	
	printf("\t\t\t\tMENU\n");
	printf("\t\t\t\t\tA. Registrarse\n");
	printf("\t\t\t\t\tB. Iniciar partida\n");
	printf("\t\t\t\t\tC. Salir\n");
	printf("\t\t\t\n");
}

void menu2(){
	
	printf("\t\t\tA. Temas\n");
	printf("\t\t\tB. Resultados\n");
	printf("\t\t\tC. Fin del juego\n");
}

void menu3(){
	
	printf("\t\t\t1. Ciencia\n");
	printf("\t\t\t2. Geografia\n");
	printf("\t\t\t3. Historia\n");
	printf("\t\t\t4. Literatura\n");
	printf("\t\t\t5. Vuelta al menu\n");
}


