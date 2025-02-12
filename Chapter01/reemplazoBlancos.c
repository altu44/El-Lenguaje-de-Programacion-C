#include <stdio.h>

/* EJERCICIO 1-9: Escriba un programa que copie su entrada a la salida, reemplazando cada cadena de uno o más blancos
* por un solo blanco
*/
int main() {
	int c, caracterAnterior;

    while ((c = getchar()) != EOF) {
		if (c != ' ') {
			if (c != '\t') {
				putchar(c);
				caracterAnterior = 'l';
			}
		}

    	if (c == ' ') {
    		if (caracterAnterior == 'l') {
    			putchar(' ');
    			caracterAnterior = 'b';
    		}
    	}

    	if (c == '\t') {
    		if (caracterAnterior == 'l') {
    			putchar(' ');
    			caracterAnterior = 'b';
    		}
    	}
    }

}

