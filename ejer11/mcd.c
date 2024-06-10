#include <stdio.h>

// Función que calcula el MCD de dos números utilizando el algoritmo de Euclides
int mcd(int a, int b) {
    // Mientras b no sea cero, continuamos iterando
    while (b != 0) {
        int temp = b;
        b = a % b; // Asignamos el residuo de a dividido por b a b
        a = temp;  // Asignamos el valor de b a a
    }
    return a; // Devolvemos el último valor no cero de b, que es el MCD
}

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos números
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    // Calcular el MCD y mostrar el resultado
    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd(num1, num2));

    return 0;
}
