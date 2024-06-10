#include <stdio.h>

// Función que cuenta el número de dígitos de un número
int contar_digitos(int numero) {
    int contador = 0;
    
    // Bucle while para contar los dígitos
    while (numero != 0) {
        numero /= 10; // Dividir el número por 10 para eliminar un dígito
        contador++;   // Incrementar el contador de dígitos
    }
    
    return contador;
}

int main() {
    int numero;
    
    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &numero);
    
    // Llamar a la función para contar los dígitos
    int cantidad_digitos = contar_digitos(numero);
    
    // Mostrar el resultado
    printf("El numero %d tiene %d digitos.\n", numero, cantidad_digitos);
    
    return 0;
}
