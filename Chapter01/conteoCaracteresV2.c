#include <stdio.h>

/* cuenta los caracteres de la entrada; 2a. version */
int main() {
	double nc;

	nc = 0;

	for (nc = 0; getchar() != EOF; ++nc)
          ;

	printf("%.0f\n", nc);
}
