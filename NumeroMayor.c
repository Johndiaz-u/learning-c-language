/*
 * funcionCal.c
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
/*calculando el numero mayor en una lista*/

#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,z,mayor;
	printf("Introduzca tres numeros enteros para verificar cual es el mayor: ");
	scanf("%d %d %d", &x, &y, &z);
	if(x>y){
		if(x>z)
			mayor=x;
		else 
			mayor=z;
	}
	else{
		if (y>z)
			mayor=y;
		else
			mayor=z;
	}
	printf("El mayor es %d \n", mayor);	
	return 0;
}

