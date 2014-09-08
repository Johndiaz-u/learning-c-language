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


//Se puede hacer asi.

#include <stdio.h>
int main (){
	
	int z,y,resultado;
	scanf("%d %d"&z, &y);
	resultado = z+y;
	printf("%d+%d=%d/n",z,y,resultado);
	return 0;
}
