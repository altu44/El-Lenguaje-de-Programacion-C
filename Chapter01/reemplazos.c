#include <stdio.h>

/* EJERCICIO 1-10: Escriba un programa que copie su entrada a la salida, reemplazando cada tabulación por \t, cada
* retroceso por \b y cada diagonal invertida por \\. Esto hace que las tabulaciones y los espacios sean visibles sin
* confusiones.
*/
int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\\') {
            printf("\\");
		} else if (c == '\t') {
            printf("\\t");
		} else if (c == '\b') {
            printf("\\b");
		} else {
			putchar(c);
		}
	}

}