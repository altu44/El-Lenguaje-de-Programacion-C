#include <stdio.h>

/* EJERCICIO 1-6: Verifique que la expresión getchar()!=EOF es 0 o 1 */
int main() {
	int c;

	c = getchar();

    printf("%d\n", c != EOF);
}
