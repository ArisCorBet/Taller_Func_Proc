#include <stdio.h>

// Función que calcula la suma de los cuadrados de los primeros n números naturales
int suma_cuadrados(int n) {
    int suma = 0;

    // Imprimir la serie de cuadrados
    printf("Serie de cuadrados: ");
    for (int i = 1; i <= n; i++) {
        int cuadrado = i * i;
        printf("%d ", cuadrado); // Imprimir el cuadrado del número actual
        suma += cuadrado;        // Sumar el cuadrado del número actual a 'suma'
    }
    printf("\n");

    return suma;
}

int main() {
    int n;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los cuadrados de los primeros n números y mostrar la serie y la suma
    printf("La suma de los cuadrados de los primeros %d numeros es: %d\n", n, suma_cuadrados(n));

    return 0;
}
