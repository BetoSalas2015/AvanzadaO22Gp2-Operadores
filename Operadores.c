// Sesi�n 15 - 19/09/2022
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

	PRINT1(f, 5 / 9.0 * 80 - 32);		//  jerarqu�a normal (divisi�n flotante)
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

void multiplicativos() 
{
	// Jerarqu�a nivel 3 - Operadores Multiplicativos
	// Operdor Multiplicaci�n ( * ) - Binario
	a = 20; b = 15;
	PRINT1(d, a * b);

	// Operador Divisi�n ( / ) 
	PRINT1(d, a / b);		//  Divisi�n entera: entero / entero = entero
	PRINT1(f, (float) a / b);
	PRINT1(f,  a /(float) b);
	PRINT1(f, (float) a /(float) b);

	// Operador Residuo ( % )
	PRINT1(d, a % b);	
}
void aditivos() 
{
	//  Jerarqu�a nivel 4 - Operadores aditivos
	// Operador Suma ( + ) - Binario
	a = 20; b = 15;
	PRINT1(d, a + b);

	// Operador Resta ( - ) - Binario
	a = 20; b = 15;
	PRINT1(d, a - b);
}
void desplazamiento()
{
	// Jerarqu�a nivel 5 - Operadores de Desplazamiento
	// Operador Desplazamiento a la izquierda ( << )
	a = 45;
	PRINT1(d, a);
	PRINT1(d, a << 1);
	PRINT1(d, a << 2);
	PRINT1(d, a << 3);

	// Operador Desplazamiento a la izquierda ( << )
	a = 180;
	PRINT1(d, a);
	PRINT1(d, a >> 1);
	PRINT1(d, a >> 2);
	PRINT1(d, a >> 3);
}
void relacionales()
{
	// Jerarqu�oa nivel 6 - Operadores Relacionales
	a = 20; b = 30;
	PRINT3(d , a, b, a < b);		// Operador menor que ( < )
	PRINT3(d , a, b, a <= b);		// Operador menor o igual que ( <= )
	PRINT3(d , a, b, a > b);		// Operador mayor que ( > )
	PRINT3(d , a, b, a >= b);		// Operador mayor o igual que ( >= )
}

void igualdad()
{
	// Jerarqu�a nivel 7 - Operadores de igualdad
	a = 20; b = 30;
	PRINT3(d , a, b, a == b);		// Operador igual que ( == )
	PRINT3(d , a, b, a != b);		// Operador no igual que o diferente de  ( == )
}
void deBits()
{
	//  Operadores de Bits
	// Jerarqu�a nivel 8 - AND de Bits ( & ) - Binario
	a = 47; b = 35;
	PRINT3(d, a, b, a & b);
	// Jerarqu�a nivel 9 - OR de Bits ( | )
	a = 47; b = 35;
	PRINT3(d, a, b, a | b);
	// Jerarqu�a nivel 10 - XOR de Bits ( ^ ) - Binario
	a = 47; b = 35;
	PRINT3(d, a, b, a ^ b);
}


int main()
{	
		//  Operadores de l�gicos
	// Jerarqu�a nivel 11 - AND l�gico ( && )
	a = 47; b = 35;
	PRINT3(d, a, b, a && b);
	// Jerarqu�a nivel 12 - OR l�gico ( || )
	a = 47; b = 35;
	PRINT3(d, a, b, a || b);

	pausa;
	cls;
	return 0;
}

