#include <stdio.h>

// Función que calcula la suma de los primeros n términos de una serie aritmética
int calcular_suma_aritmetica(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
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
        // Llamar a la función para calcular la suma aritmética
        int resultado = calcular_suma_aritmetica(n);

        // Mostrar el resultado
        printf("La suma de los primeros %d términos de la serie aritmética es: %d\n", n, resultado);
    }

    return 0;
}
