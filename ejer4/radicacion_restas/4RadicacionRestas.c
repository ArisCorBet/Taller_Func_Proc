#include <stdio.h>

// Función que calcula la raíz cúbica de un número mediante restas sucesivas
int calcular_raiz_cubica(int numero) {
    int resultado = 0;
    int contador = 0;

    while (numero >= 0) {
        numero -= contador * contador * contador;
        if (numero >= 0) {
            resultado++;
            contador++;
        }
    }
    return resultado;
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    // Llamar a la función para calcular la raíz cúbica
    int resultado = calcular_raiz_cubica(numero);

    // Mostrar el resultado
    printf("La raiz cubica de %d es: %d\n", numero, resultado);

    return 0;
}
