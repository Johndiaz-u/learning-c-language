/*
 * practica.4.9.c
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
/*Escribir un programa que solicite al usuario la longitud y anchura 
 * de una habitacion y acontinuacion visualizar su superficie con cuatro
 * decimales (formato %.4f)*/

#include <stdio.h>

int main(int argc, char **argv){
	float l, a, area;
	printf("introduzca logitud y anchura del cuarto: ");
	scanf("%f %f", &l, &a);
	area = l*a;
	printf("superficie: %.4fM", area);
	return 0;
}

//Se puede hacer de esta manera.

#include <stdio.h>
int main(int argc, char **argv){
	float x, z, area;
	area=x*y;
	printf("%d*%d=%d",x,z,area);
	return: 0;
}









