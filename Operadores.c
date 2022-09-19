// Sesión 15 - 19/09/2022
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
	//  Jerarquía nivel 1 - Operadores Primarios
	//  Operador Llamada a función ( () )
	printf("Ahi te va un numero aleatorio: %i\n", rand() );

	PRINT1(f, 5 / 9.0 * 80 - 32);		//  jerarquía normal (división flotante)
	PRINT1(f, 5 / 9.0 * (80 - 32) );		//  jerarquía alterada

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
//  Jerarquía nivel 2 - Operadores unarios
	//  Operador negación lógica ( ! )
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
	
	//  Operador Dirección ( & ) - unario
	ptrJuanito = &Juanito;	// La direccion de memoria de la variable Juanito

	//  Operador indirección ( * ) - unario
	a = 20;
	b = 10;
	PRINT1(d, a);
	ptr = &a;
	*ptr = 30;
	PRINT1(d, a);
	
	//  Operador Tamaño de ( sizeof )
	printf("El tamaño del tipo char es de %d bytes \n", sizeof( char ) );
	printf("El tamaño del tipo int es de %d bytes \n", sizeof( int ) );
	printf("El tamaño del tipo float es de %d bytes \n", sizeof( float ) );
	printf("El tamaño del tipo double es de %d bytes \n", sizeof( double ) );
	printf("El tamaño del tipo struct Persona es de %d bytes \n", sizeof( struct Persona ) );
	printf("El tamaño del ptr es de %d bytes \n", sizeof( ptr ) );

	//  Operador Cast ( (tipo dato) ) - Conversión de datos
	car = 75;
	PRINT1(c, car);
	PRINT1(d, car);

	//  Promocion de tipos
	//  char -> int -> float -> double
	a = car;			// char -> int
	f = a;				// int -> float
	h = f;				// float a double
	f = h;				// "Pérdida de datos"

	a = (int) car;		// Conversión "explícita" de datos
	f = (float) a;
	h = (double) f;
	f = (float) h;
}

void multiplicativos() 
{
	// Jerarquía nivel 3 - Operadores Multiplicativos
	// Operdor Multiplicación ( * ) - Binario
	a = 20; b = 15;
	PRINT1(d, a * b);

	// Operador División ( / ) 
	PRINT1(d, a / b);		//  División entera: entero / entero = entero
	PRINT1(f, (float) a / b);
	PRINT1(f,  a /(float) b);
	PRINT1(f, (float) a /(float) b);

	// Operador Residuo ( % )
	PRINT1(d, a % b);	
}
void aditivos() 
{
	//  Jerarquía nivel 4 - Operadores aditivos
	// Operador Suma ( + ) - Binario
	a = 20; b = 15;
	PRINT1(d, a + b);

	// Operador Resta ( - ) - Binario
	a = 20; b = 15;
	PRINT1(d, a - b);
}
void desplazamiento()
{
	// Jerarquía nivel 5 - Operadores de Desplazamiento
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
	// Jerarquíoa nivel 6 - Operadores Relacionales
	a = 20; b = 30;
	PRINT3(d , a, b, a < b);		// Operador menor que ( < )
	PRINT3(d , a, b, a <= b);		// Operador menor o igual que ( <= )
	PRINT3(d , a, b, a > b);		// Operador mayor que ( > )
	PRINT3(d , a, b, a >= b);		// Operador mayor o igual que ( >= )
}

void igualdad()
{
	// Jerarquía nivel 7 - Operadores de igualdad
	a = 20; b = 30;
	PRINT3(d , a, b, a == b);		// Operador igual que ( == )
	PRINT3(d , a, b, a != b);		// Operador no igual que o diferente de  ( == )
}
void deBits()
{
	//  Operadores de Bits
	// Jerarquía nivel 8 - AND de Bits ( & ) - Binario
	a = 47; b = 35;
	PRINT3(d, a, b, a & b);
	// Jerarquía nivel 9 - OR de Bits ( | )
	a = 47; b = 35;
	PRINT3(d, a, b, a | b);
	// Jerarquía nivel 10 - XOR de Bits ( ^ ) - Binario
	a = 47; b = 35;
	PRINT3(d, a, b, a ^ b);
}


int main()
{	
		//  Operadores de lógicos
	// Jerarquía nivel 11 - AND lógico ( && )
	a = 47; b = 35;
	PRINT3(d, a, b, a && b);
	// Jerarquía nivel 12 - OR lógico ( || )
	a = 47; b = 35;
	PRINT3(d, a, b, a || b);

	pausa;
	cls;
	return 0;
}

