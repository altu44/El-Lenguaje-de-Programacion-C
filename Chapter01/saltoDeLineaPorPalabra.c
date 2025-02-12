#include <stdio.h>

#define IN 1 /* en una palabra */
#define OUT 0 /* fuera de una palabra */

/* EJERCICIO 1-12: Escriba un programa que imprima su entrada una palabra por línea */

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {
        	putchar('\n');
		} else {
            putchar(c);
        }
	}
}