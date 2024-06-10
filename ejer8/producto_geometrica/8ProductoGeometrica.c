#include <stdio.h>

// Función que calcula el producto de los primeros n términos de una serie geométrica
int calcular_producto_geometrico(int n) {
    int producto = 1;
    int termino = 2; // Primer término de la serie geométrica

    for (int i = 0; i < n; i++) {
        producto *= termino;
        termino *= 2; // El siguiente término es el doble del anterior
    }
    return producto;
}

int main() {
    int n;

    // Solicitar al usuario que ingrese el número de términos
    printf("Ingresa el número de términos: ");
    scanf("%d", &n);

    // Verificar que el número de términos no sea negativo
    if (n < 0) {
        printf("El número de términos debe ser un número positivo.\n");
    } else {
        // Llamar a la función para calcular el producto geométrico
        int resultado = calcular_producto_geometrico(n);

        // Mostrar el resultado
        printf("El producto de los primeros %d términos de la serie geométrica es: %d\n", n, resultado);
    }

    return 0;
}
