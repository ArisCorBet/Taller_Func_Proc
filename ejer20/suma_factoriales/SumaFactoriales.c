#include <stdio.h>

// Función para calcular el factorial de un número
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Función para calcular la suma de los factoriales de los primeros n números
int sumafacto(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }
    return suma;
}

int main() {
    int n;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los factoriales de los primeros n números y mostrar el resultado
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, sumafacto(n));

    return 0;
}
