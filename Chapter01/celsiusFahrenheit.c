#include <stdio.h>

/* EJERCICIO 1-4: Escriba un programa que imprima la tabla correspondiente Celsius a Fahrenheit */

int main() {
    float celsius, fahr;
    int upper, lower, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("%10s %10s\n", "Celsius", "Fahrenheit");
    while(celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%10.0f %10.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}


