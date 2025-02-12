#include <stdio.h>

/* copia la entrada a la salida; 1a. version */
int main() {
	int c;

	while((c=getchar())!=EOF){
		putchar(c);
	}
}
