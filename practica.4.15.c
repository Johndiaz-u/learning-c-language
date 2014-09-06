/*
 * practica.4.15.c
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
 
/*escribir un programa que lea tres enteros y emita un mensaje
 * que indique si estan o no en orden numerico.*/

#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,z;
	printf("introduzca tres numeros: ");
	scanf("%d %d %d", &x, &y, &z);
	if(x<y && y<z)
		printf("Estan en orden numerico: %d %d %d\n", x,y,z);
	else 
		printf("No estan en orden numerico");
	return 0;
}

