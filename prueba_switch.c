/*
 * prueba_switch.c
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

int main(int argc, char **argv){
	int num_de_elementos, cuenta, calorias_por_alimento,calorias_total;
	printf("cuantos alimentos ha comido hoy? ");
	scanf("%d", &num_de_elementos);
	calorias_total = 0;
	cuenta = 1;
	printf("Introducir el numero de calorias de cada uno de los ");
	printf("%d %s", num_de_elementos,"alimentos tomados: \n");
	
	while(cuenta++ <= num_de_elementos){
		scanf("%d", &calorias_por_alimento);
		calorias_total += calorias_por_alimento;
		printf("calorias totales: %d\n", calorias_total);
	}
	printf("Las calorias totales sonsumidas hoy son = %d \n", calorias_total);
	return 0;
}

