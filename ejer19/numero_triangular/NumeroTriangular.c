#include <stdio.h>

// Función que calcula el n-ésimo número triangular
int numero_triangular(int n) {
    int suma = 0;

    // Sumar los números naturales desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    return suma;
}

int main() {
    int n;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    // Calcular el n-ésimo número triangular y mostrar el resultado
    printf("El %d-esimo numero triangular es: %d\n", n, numero_triangular(n));

    return 0;
}
