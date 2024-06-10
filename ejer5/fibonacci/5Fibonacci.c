#include <stdio.h>

// Función para calcular y mostrar la serie de Fibonacci
void calcularFibonacci(int n) {
    int a = 0, b = 1, siguiente;

    printf("Serie de Fibonacci: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            siguiente = i; // Para los primeros dos elementos, simplemente usar 0 y 1
        } else {
            siguiente = a + b; // Generar el siguiente número en la serie
            a = b; // Mover a y b un paso adelante en la serie
            b = siguiente;
        }
        printf("%d ", siguiente);
    }
    printf("\n");
}

int main() {
    int n;

    // Solicitar al usuario que ingrese el número de elementos de la serie de Fibonacci
    printf("Ingresa el número de elementos de la serie de Fibonacci: ");
    scanf("%d", &n);

    // Verificar que n sea un número positivo
    if (n <= 0) {
        printf("Por favor, ingresa un número positivo.\n");
    } else {
        calcularFibonacci(n);
    }

    return 0;
}
