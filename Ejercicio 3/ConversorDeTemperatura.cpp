#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;

    // Solicitar al usuario que ingrese la temperatura en grados Celsius
    printf("Introduce la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    // Convertir Celsius a Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Mostrar el resultado
    printf("La temperatura en grados Fahrenheit es: %.2f\n", fahrenheit);

    return 0;
}
