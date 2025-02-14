#include <stdio.h>

/* EJERCICIO 1-15: Escriba de nuevo el programa de conversión de temperatura de la sección 1.2, de modo que
 * utilice una función para la conversión */

/* Imprime la tabla Fahrenheit-Celsius para fahr = 0, 20, ..., 300 */

float conversion(float fahr);

int main() {
	float fahr;
	int lower, upper, step;

	lower = 0;    /* limite inferior de la tabla de temperaturas */
	upper = 300;    /* limite superior */
	step = 20;    /* tamaño del incremento */

	fahr = lower;

	while (fahr <= upper) {
		printf("%3.0f %6.1f\n", fahr, conversion(fahr));
		fahr = fahr + step;
	}
}

float conversion(float fahr) {
  	float celsius;

	celsius = (5.0/9.0) * (fahr-32.0);

    return celsius;
}
