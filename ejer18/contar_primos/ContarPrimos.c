#include <stdio.h>

// Función que verifica si un número es primo
int es_primo(int num) {
    if (num <= 1) {
        return 0; // No es primo
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // No es primo
        }
    }
    return 1; // Es primo
}

int main() {
    int n;
    int contador_primos = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    // Contar los números primos hasta n
    for (int i = 2; i <= n; i++) {
        contador_primos += es_primo(i);
    }

    // Mostrar el resultado
    printf("Hay %d numeros primos hasta %d.\n", contador_primos, n);

    return 0;
}
