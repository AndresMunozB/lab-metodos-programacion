#include <stdio.h>
//Funcion por valor
int suma(int a, int b){
	return a + b;
}

//Funcion por valor
int resta(int a, int b){
	return a - b;
}
//Funcion por referencia, en este caso el resultado queda dentro de "a"
void multiplicar(int *a, int *b){
	*a = (*a) * (*b);
}
//Funcion por referenia, al igual que la funcion anterior el resultado queda dentro de "a"
void dividir(int *a, int *b){
	*a = (*a) / (*b);
}

//Funcion para imprimir las opciones del menu
void print_menu(){
	printf("   MENU\n");
	printf("1.- Sumar\n");
	printf("2.- Restar\n");
	printf("3.- Multiplicar\n");
	printf("4.- Dividir\n");
	printf("5.- Salir\n\n");
	printf("Elija una opcion:");
}

//Funcion main que es la que es llamada al momento de ejecutar el programa
int main(){
	int menu = 0; //Variable que sirve para captuar la opcion que elige el usuario
	int pause; 

	while(1){ // Ciclo para que se repita el manu hasta que el usuario elija salir del programa
		print_menu(); //Se imprime las opciones que puede elegir el usuario
		fflush(stdin); // Se vacia el buffer de entrada (puede haber basura en el buffer), generalmente se utiliza esto para que no exista fallas en el scanf()
		scanf("%d", &menu); // Se optiene la opcion del usuario.
		switch(menu){ // 
			int x; //Variable a operar
			int y; // Variable a operar

			case 1:	//Primer caso: Sumar (Cuando la variable menu toma el valor de 1)
				
				printf("Ingrese el primer valor: ");
				fflush(stdin);
				scanf("%d", &x);	
				printf("Ingrese el segundo valor: ");
				fflush(stdin);
				scanf("%d", &y);
				printf("La suma de %d y %d es: %d \n",x,y,suma(x,y) );				
				break;

			case 2:	 //Segundo caso: Restar (Cuando la variable menu toma el valor de 2)
				printf("Ingrese el primer valor: ");
				fflush(stdin);
				scanf("%d", &x);	
				printf("Ingrese el segundo valor: ");
				fflush(stdin);
				scanf("%d", &y);
				printf("La resta de %d y %d es: %d \n",x,y,resta(x,y) );				
				break;

			case 3: //Tercer caso: Multiplicar (Cuando la variable menu toma el valor de 3)
				printf("Ingrese el primer valor: ");
				fflush(stdin);
				scanf("%d", &x);	
				printf("Ingrese el segundo valor: ");
				fflush(stdin);
				scanf("%d", &y);
				printf("La multiplicacion de %d y %d es: ",x,y);
				multiplicar(&x,&y);
				printf("%d\n", x );				
				break;

			case 4: //Cuarto caso: Dividir	(Cuando la variable menu toma el valor de 4)
				printf("Ingrese el primer valor: ");
				fflush(stdin);
				scanf("%d", &x);	
				printf("Ingrese el segundo valor: ");
				fflush(stdin);
				scanf("%d", &y);
				printf("La multiplicacion de %d y %d es: ",x,y);
				dividir(&x,&y);
				printf("%d\n", x );				
				break;
			case 5: //Quinto caso: Salir (Cuando la variable menu toma el valor de 5)
				printf("\nFIN DEL PROGRAMA\n");
				return 0;
		}
	}
}