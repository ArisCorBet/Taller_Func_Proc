#include <stdio.h>

// Función que calcula el factorial de un número
int calcular_factorial(int numero) {
    int factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    // Verificar que el número no sea negativo
    if (numero < 0) {
        printf("El factorial no esta definido para numeros negativos.\n");
    } else {
        // Llamar a la función para calcular el factorial
        int resultado = calcular_factorial(numero);

        // Mostrar el resultado
        printf("El factorial de %d es: %d\n", numero, resultado);
    }

    return 0;
}
