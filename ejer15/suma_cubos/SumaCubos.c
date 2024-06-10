#include <stdio.h>

// Función que calcula la suma de los cubos de los primeros n números naturales
int suma_cubos(int n) {
    int suma = 0;

    // Imprimir la serie de cubos
    printf("Serie de cubos: ");
    for (int i = 1; i <= n; i++) {
        int cubo = i * i * i;
        printf("%d ", cubo); // Imprimir el cubo del número actual
        suma += cubo;        // Sumar el cubo del número actual a 'suma'
    }
    printf("\n");

    return suma;
}

int main() {
    int n;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los cubos de los primeros n números y mostrar el resultado
    printf("La suma de los cubos de los primeros %d numeros es: %d\n", n, suma_cubos(n));

    return 0;
}
