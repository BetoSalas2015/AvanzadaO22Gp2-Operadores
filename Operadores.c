// Sesi�n 11 - 07/09/2022
#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

void bases()
{
	a = 179;
	printf("179 Base 10 equivale a %o Base 8\n", a);
	printf("179 Base 10 equivale a %X Base 16\n", a);

	a = 0263;
	printf("263 Base 8 equivale a %d Base 10\n", a);
	printf("263 Base 8 equivale a %X Base 16\n", a);

	a = 0xB3;
	printf("B3 Base 16 equivale a %d Base 10\n", a);
	printf("B3 Base 16 equivale a %o Base 8\n", a);
}

void unarios()
{
	//  Jerarqu�a nivel 1 - Operadores Primarios
	//  Operador Llamada a funci�n ( () )
	printf("Ahi te va un numero aleatorio: %i\n", rand() );

	PRINT1(f, 5 / 9.0 * 80 - 32);		//  jerarqu�a normal
	PRINT1(f, 5 / 9.0 * (80 - 32) );		//  jerarqu�a alterada

	// Operador Indice de arreglo ( [] )
	Arreglo[2] = 20;
	PRINT1(d, Arreglo[2]);

	// Operador Punto (Parte de una estructura) ( . )
	Juanito.edad = 30;
	PRINT1(d, Juanito.edad);

	//  Operador Flecha (Parte de una estructura) ( -> )
	ptrJuanito = &Juanito;
	PRINT1(d, ptrJuanito->edad);

}
int main()
{	
	
	pausa;
	cls;
	return 0;
}

