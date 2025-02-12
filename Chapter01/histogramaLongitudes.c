#include <stdio.h>

/* EJERCICIO 1-13: Escriba un programa que imprima el histograma de las longitudes de las palabras de su entrada.
 * Es fácil dibujar el histograma con las barras horizontales; la orientación vertical es un reto más interesante.
 */

#define Tamano_Arreglo  100

int main() {
	printf("\nIntroduzca una cadena y se imprimira un histograma con el numero de caracteres.\n");
	printf("de cada palabra (ctl D) para terminar\n");

	int c;  //Se leera caracter por caracter.
	int i;  // i es el contador del ciclo for (aparentemente no se puede
	//definir dentro del cilo for)
	int s;   // s es el contador de un ciclo for
	int numero_palabra = 1;   // Se asume como uno el contador de palabras
	int longitud_palabra_mas_larga = 0;
	int palabra_mas_larga = 0;
	int caracteres[Tamano_Arreglo + 1] = { 0, 0 };  //Al inicializar a 0 los

	// primeros elementos del arreglo se inicializan todos.

	while ( (c = getchar()) != EOF)
	{
		if( c == '\t'  || c == '\n' || c == ' ' )

			/* Si se encuentra un espacio, entonces se considera que se ha iniciado
			   una nueva palabra */

		{
			if (longitud_palabra_mas_larga < caracteres[numero_palabra])
			{
				longitud_palabra_mas_larga = caracteres[numero_palabra];
				palabra_mas_larga = numero_palabra;
			}
			numero_palabra++;
		}

		else
			caracteres[numero_palabra]++;

		// Si no es un espacio, se incrementa el numero de caracteres
		// de la palabra actual

	}


	printf("Numero de palabra es: %d ", numero_palabra - 1);
	printf("\n\n");
	for ( s = longitud_palabra_mas_larga; s >= 1; s-- )
	{
		for ( i = 1; i <= numero_palabra; i++ )
		{
			if ( caracteres[i] >= s )
				printf("* ");
			else
				printf("  ");
		}

		printf("\n");

	}

	printf("\n");
	return 0;
}