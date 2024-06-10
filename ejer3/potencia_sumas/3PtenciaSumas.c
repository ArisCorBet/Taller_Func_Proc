#include <stdio.h>

// Función que calcula la potencia de un número
int calcular_potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        int tempResultado = 0;
        for (int j = 0; j < base; j++) {
            tempResultado += resultado;
        }
        resultado = tempResultado;
    }
    return resultado;
}

int main() {
    int numero, exponente;

    // Solicitar al usuario que ingrese el número que vendría a ser la base y el exponente
    printf("Ingresa un numero: ");
    scanf("%d", &numero);
    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);

    // Llamar a la función para calcular la potencia
    int resultado = calcular_potencia(numero, exponente);

    // Mostrar el resultado
    printf("%d^%d es: %d\n", numero, exponente, resultado);

    return 0;
}
