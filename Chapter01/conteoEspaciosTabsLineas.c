#include <stdio.h>

/* EJERCICIO 1-8: Escriba un programa que cuente espacios en blanco,tabuladores y nuevas lineas. */
int main() {
	int c, nl, nt, ns;

	nl = 0;
	nt = 0;
	ns = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
        else if (c == '\t')
          	++nt;
        else if (c == ' ')
          	++ns;

	printf("Numero de lineas: %d\n", nl);
	printf("Numero de tabuladores: %d\n", nl);
    printf("Numero de espacios en blanco: %d\n", nl);
}
