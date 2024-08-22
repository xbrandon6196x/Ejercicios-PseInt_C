#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x, um, c, d, u;

    printf("Da un valor de 4 digitos");
    scanf("%d", &x);

    // Calcular las unidades de millar
    um = x / 1000; // Divide x por 1000 para obtener el primer dígito (unidad de millar)
    x = x % 1000;  // Calcula el resto de x dividido por 1000, eliminando el primer dígito

    // Calcular las centenas
    c = x / 100;   // Divide el nuevo valor de x por 100 para obtener el segundo dígito (centena)
    x = x % 100;   // Calcula el resto de x dividido por 100, eliminando el segundo dígito

    // Calcular las decenas
    d = x / 10;    // Divide el nuevo valor de x por 10 para obtener el tercer dígito (decena)
    x = x % 10;    // Calcula el resto de x dividido por 10, eliminando el tercer dígito

    // Calcular las unidades
    u = x;         // El valor restante de x es el cuarto dígito (unidad)

    // Imprimir los resultados
    printf("unidades de millar: %d\n", um);
    printf("centenas: %d\n", c);
    printf("decenas: %d\n", d);
    printf("unidades: %d\n", u);

    return 0;
}
