/*
 * practica.4.11.c
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
 
 /*Escribir un programa que solicite dos numeros decimales y calcule su suma
  * visualizando la suma. por ejemplo, si los numeros son 57.45 y 425.55, 
  * el programa visualizara:
  * 57.45
  * 425.55
  * 483.00*/


#include <stdio.h>

int main(int argc, char **argv){
	float x, y, resultado;
	printf("intruduzca los numeros a sumar: ");
	scanf("%f %f", &x, &y);
	resultado = x + y;
	printf("%.2f", resultado);
	return 0;
}

