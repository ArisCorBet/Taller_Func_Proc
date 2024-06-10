#include <stdio.h>

// Función que verifica si un número es primo
int es_primo(int numero) {
    // Los números menores o iguales a 1 no son primos
    if (numero <= 1) {
        return 0;
    }

    // Iteramos desde 2 hasta la mitad del número para verificar si tiene algún divisor
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0; // Si es divisible por algún otro número, no es primo
        }
    }

    return 1; // Si no es divisible por ningún otro número, es primo
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    // Verificar si el número es primo y mostrar el resultado
    if (es_primo(numero)) {
        printf("%d es primo.\n", numero);
    } else {
        printf("%d no es primo.\n", numero);
    }

    return 0;
}
