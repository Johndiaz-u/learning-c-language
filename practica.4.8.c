/*Escribir un programa que lea dos numeros enteros en las variables 
 x e y, acontinuacion obtenga los valores de: 1. x/y, 2. x%y. ejecute
 * el programa  varias veces con diferentes pares de enteros como entrada.*/
 
#include <stdio.h>
int main(){
	int x, y,resultado;
	printf("introduzca el valor de X e Y ejemplo 5 2:");
	scanf("%d %d",&x,&y);
	resultado = (x/y);
	printf("division: %d\n", resultado);
	resultado = (x%y);
	printf("modulo: %d\n", resultado);
	return 0;
}
