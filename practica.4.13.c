/*
 * practica.4.13.c
 * 
 * Copyright 2014 maximo <maximo@maximo-Satellite-C655>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

/*Escribir un programa para calcular la longitud de la circunferencia
 * y el area del circulo para un radio introducido por el teclado.*/
 
#include <stdio.h>

int main(int argc, char **argv){
	float radio, longitud, area;
	printf("introduzca el radio: ");
	scanf("%f", &radio);
	longitud = (2*3.1416*radio);
	area = (2*3.1426*(radio*radio));
	printf("La longitud: %f\n", longitud);
	printf("El area: %f\n", area);
	return 0;
}

//Dale ojo

#include <stdio.h>

int main(int argc, char **argv){
	float radio, pi, lon, area;
	scanf("%f",&radio);
	lon=(2*pi*radio);
	area=(2*pi*radio*radio);
	printf("%f*%f*%f=%f/n",2,pi,radio,lon);
	printf("%f*%f*%f*%f=%f/n",2,pi,radio,radio,area);
	
	return 0;
	
}





