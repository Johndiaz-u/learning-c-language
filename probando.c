/*
 * probando.c
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
 
#include <stdio.h>
#define MAX 25

int main(int argc, char **argv)
{
	int filas, columnas;
	int i, j;
	char elCar;
	printf("cuantas filas?: ");
	scanf("%d",&filas);
	printf("Cuantas columnas?: ");
	scanf("%d", &columnas);
	printf("Que caracter?: ");
	scanf("\n%c",&elCar);
	for(i = 0;i < filas; i++){
		for(j = 0;j < columnas;j++)
			putchar(elCar);
		putchar('\n');
		}
	return 0;
}

