/*
 * practica.4.10.c
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

/*escribir u programa que convierta un numero dado de segundos en el equivalente 
 * de minutos y segundos*/
#include <stdio.h>

int main(int argc, char **argv){
	int seg, min, pre, seg1;
	printf("introducir los segundos que quiere convertir: ");
	scanf("%d", &seg);
	min=(seg/60);
	pre=min*60;
	seg1=(seg-pre);
	printf("Tiempo: %dM:%dS", min, seg1);
	return 0;
}

