/*
 * practica.6.13.c
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
const int num_linas = 5;
const char blanco = ' ';
const char asterisco = '*';

int main(int argc, char **argv)
{
	int fila, blancos, cuenta_as;
	puts(" ");
	for(fila = 1; fila <= num_linas; fila++){
		putchar('\t');
		for(blancos = num_linas-fila; blancos > 0; blancos--)
			putchar(blanco);
		for(cuenta_as = 1; cuenta_as < 2 * fila; cuenta_as++)
			putchar(asterisco);
		puts(" ");
	}
	return 0;
}

