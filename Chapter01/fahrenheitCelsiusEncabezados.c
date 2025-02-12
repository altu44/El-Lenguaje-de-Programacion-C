#include <stdio.h>

/* Imprime la tabla Fahrenheit-Celsius para fahr = 0, 20, ..., 300 */
/* EJERCICIO 1-3: Modifique el programa de conversión de temperaturas de modo que escriba un encabezado sobre la
 * tabla.
 */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    /* limite inferior de la tabla de temperaturas */
    upper = 300;    /* limite superior */
    step = 20;    /* tamaño del incremento */

    fahr = lower;

    printf("%10s %10s\n", "Fahrenheit", "Celsius");    /* encabezados */
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f %10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}