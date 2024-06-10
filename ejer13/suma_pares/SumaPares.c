#include <stdio.h>

// Función que calcula la suma de todos los números pares hasta n
int suma_pares(int n) {
    int suma = 0;

    // Imprimir la serie de números pares
    printf("Serie de numeros pares: ");
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i); // Imprimir el número par actual
        suma += i;        // Sumar el número par actual a 'suma'
    }
    printf("\n");

    return suma;
}

int main() {
    int n;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los números pares y mostrar la serie y la suma
    printf("La suma de los numeros pares hasta %d es: %d\n", n, suma_pares(n));

    return 0;
}
