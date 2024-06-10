#include <stdio.h>

// Función que suma los dígitos de un número
int suma_digitos(int numero) {
    int suma = 0;
    while (numero > 0) {
        suma += numero % 10; // Obtener el último dígito y sumarlo
        numero /= 10;        // Eliminar el último dígito
    }
    return suma;
}

int main() {
    int numero;

    printf("=====Suma de digitos de un numero=====\n");
    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    // Almacenar el número original para posibles usos futuros
    int numeroOriginal = numero;

    // Llamar a la función para sumar los dígitos
    int suma = suma_digitos(numero);

    // Mostrar el resultado
    printf("La suma de los digitos de %d es: %d\n", numeroOriginal, suma);

    return 0;
}
