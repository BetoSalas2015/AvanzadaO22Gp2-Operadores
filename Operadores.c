// Sesi�n 13 - 12/09/2022
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
void primarios()
{
//  Jerarqu�a nivel 2 - Operadores unarios
	//  Operador negaci�n l�gica ( ! )
	//  0 => false, cualquier otra cosa => true
	a = 5666;			//  guardo true
	if( 0 )
		printf("Es verdadero\n");
	else
		printf("Es falso \n");

	a =566;
	PRINT2(d, a, !a);
	PRINT2(d, a, !!!a);
	PRINT2(d, a, !!!!!!!!!!!!!!!!!!!!!a);

	//  Operador menos unario ( - ) - unario
	a = -3;
	b = 3;
	PRINT2(d, a, b);

	//  Operador Complemento a uno ( ~ )
	a = 20;
	PRINT2(d, a, ~a);

	//  Operadores Incremento ( ++ ) y decremento ( -- )
	a = 20;
	a++;
	PRINT1(d, a);
	a = 20;
	++a;
	PRINT1(d, a);
	a = 20;
	PRINT2(d, a++, a);
	a = 20;
	PRINT2(d, ++a, a);
	a = 20; b = 10;
	PRINT1(d, a+++b );
	PRINT2(d, a, b);
	a = 20; b = 10;
	PRINT1(d, a++ + ++b );
	PRINT2(d, a, b);
	
	//  Operador Direcci�n ( & ) - unario
	ptrJuanito = &Juanito;	// La direccion de memoria de la variable Juanito

	//  Operador indirecci�n ( * ) - unario
	a = 20;
	b = 10;
	PRINT1(d, a);
	ptr = &a;
	*ptr = 30;
	PRINT1(d, a);
	
	//  Operador Tama�o de ( sizeof )
	printf("El tama�o del tipo char es de %d bytes \n", sizeof( char ) );
	printf("El tama�o del tipo int es de %d bytes \n", sizeof( int ) );
	printf("El tama�o del tipo float es de %d bytes \n", sizeof( float ) );
	printf("El tama�o del tipo double es de %d bytes \n", sizeof( double ) );
	printf("El tama�o del tipo struct Persona es de %d bytes \n", sizeof( struct Persona ) );
	printf("El tama�o del ptr es de %d bytes \n", sizeof( ptr ) );

	//  Operador Cast ( (tipo dato) ) - Conversi�n de datos
	car = 75;
	PRINT1(c, car);
	PRINT1(d, car);

	//  Promocion de tipos
	//  char -> int -> float -> double
	a = car;			// char -> int
	f = a;				// int -> float
	h = f;				// float a double
	f = h;				// "P�rdida de datos"

	a = (int) car;		// Conversi�n "expl�cita" de datos
	f = (float) a;
	h = (double) f;
	f = (float) h;
}

int main()
{	
	

	pausa;
	cls;
	return 0
}

