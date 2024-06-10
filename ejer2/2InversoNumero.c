#include <stdio.h>

// Función que invierte los dígitos de un número
int invertir_numero(int numero) {
    int inverso = 0;
    while (numero != 0) {
        inverso = inverso * 10 + (numero % 10); // Agregar el último dígito al inverso
        numero /= 10;                           // Eliminar el último dígito del número
    }
    return inverso;
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    // Almacenar el número original para posibles usos futuros
    int numeroOriginal = numero;

    // Llamar a la función para invertir el número
    int inverso = invertir_numero(numero);

    // Mostrar el resultado
    printf("El inverso de %d es: %d\n", numeroOriginal, inverso);

    return 0;
}
