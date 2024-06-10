#include <stdio.h>

// Función que calcula la suma de todos los números impares hasta n
int suma_impares(int n) {
    int suma = 0;

    // Imprimir la serie de números impares
    printf("Serie de numeros impares: ");
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i); // Imprimir el número impar actual
        suma += i;        // Sumar el número impar actual a 'suma'
    }
    printf("\n");

    return suma;
}

int main() {
    int n;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los números impares y mostrar la serie y la suma
    printf("La suma de los numeros impares hasta %d es: %d\n", n, suma_impares(n));

    return 0;
}
