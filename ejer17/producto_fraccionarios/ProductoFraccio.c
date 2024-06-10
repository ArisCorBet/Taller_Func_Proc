#include <stdio.h>

// Función que calcula el producto de una serie de números fraccionarios hasta n
double producto_fraccionarios(int n) {
    double producto = 1.0;

    // Imprimir la serie de números fraccionarios
    printf("Serie de numeros fraccionarios: ");
    for (int i = 1; i <= n; i++) {
        double termino = 1.0 / i; // Calcular el término actual de la serie
        printf("%.2f ", termino); // Imprimir el término actual
        producto *= termino; // Multiplicar el término actual al producto
    }
    printf("\n");

    return producto;
}

int main() {
    int n;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    // Calcular el producto de la serie de números fraccionarios hasta n y mostrar el resultado
    printf("El producto de la serie de numeros fraccionarios hasta %d es: %.5f\n", n, producto_fraccionarios(n));

    return 0;
}
