/*
 * numero_par.c
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
 
/*Verifica si el numero es par o impar*/

#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	printf("Introduzca un numero cualquiera: ");
	scanf("%d", &n);
	if (n%2 == 0)
		printf("El numero: %d es par.\n", n);
	else
		printf("El numero: %d no es par.\n",n);
	return 0;
}
