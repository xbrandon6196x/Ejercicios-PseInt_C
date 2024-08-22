#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num1, num2; // Usamos float para manejar números decimales
    float suma, resta, multiplicacion, division;

    // Solicitar al usuario que ingrese dos números
    printf("Introduce el primer número: ");
    scanf("%f", &num1);
    printf("Introduce el segundo número: ");
    scanf("%f", &num2);

    // Realizar las operaciones
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    
    // Verificar si el segundo número es diferente de 0 para evitar la división por cero
    if (num2 != 0)
    {
        division = num1 / num2;
    }
    else
    {
        printf("No se puede dividir entre 0.\n");
    }

    // Mostrar los resultados
    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicación: %.2f\n", multiplicacion);
    if (num2 != 0)
    {
        printf("División: %.2f\n", division);
    }

    return 0;
}
