/*
 *Pequeña demostración de una suma con el lenguaje c. 
*/

#include <stdio.h>
int main()
{
	int a, b, suma;
	printf("Introduzca los dos valores de la suma: ");
	scanf("%d %d",&a, &b);
	suma = a+b;
	printf("La suma de A+B = %d\n", suma);
	return 0;
}
