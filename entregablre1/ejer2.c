#include <stdio.h>
#include <unistd.h>
//punto 2 del minitp alumna:Sofia Alcaraz com:01
int main(void){
	//inicializacion de variables

	int num1;
	int num2;
	int suma;
	int nuevo;
	int i;

	//se muestra algo y luego se toman  enteros por teclado
	printf("Estados de un proceso mediante cuentas aritmeticas:\n");
	printf("Ingrese un numero mayor a 100:\n");
	//sleep(10);
	scanf("%d",&num1);
	printf("Ingrese un numero mayor a 100:\n");
	scanf("%d",&num2);

	while(1){ //bucle infinito para ver el estado run
	for(i = 0; i <= num1; i++){
		suma=suma+i;

	}

	for(i = 0; i<=num2;i++){
		suma=suma+i;
	}
	}

	return suma;
}
