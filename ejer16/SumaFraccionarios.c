#include <stdio.h>

// Función que calcula la suma de una serie de números fraccionarios hasta n
double suma_fraccionarios(int n) {
    double suma = 0.0;

    // Imprimir la serie de números fraccionarios
    printf("Serie de numeros fraccionarios: ");
    for (int i = 1; i <= n; i++) {
        double termino = 1.0 / i; // Calcular el término actual de la serie
        printf("%.2f ", termino); // Imprimir el término actual
        suma += termino; // Sumar el término actual a la suma
    }
    printf("\n");

    return suma;
}

int main() {
    int n;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    // Calcular la suma de la serie de números fraccionarios hasta n y mostrar el resultado
    printf("La suma de la serie de numeros fraccionarios hasta %d es: %.2f\n", n, suma_fraccionarios(n));

    return 0;
}
