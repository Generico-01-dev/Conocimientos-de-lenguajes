#include <stdio.h>
#include <stdbool.h>

int main() {
    // Enteros (int): 4 bytes usualmente
    int edad = 25;
    
    // Flotantes (float): decimales, precisión simple
    float altura = 1.75;

    // Dobles (double): decimales, pero con mas precision
    double peso = 100.525;

    // Long: enteros largos (8 bytes)
    long poblacion = 7800000000;

    // Booleanos (bool): 1 byte (usar stdbool.h)
    bool es_estudiante = 1; //true
    
    // Caracteres (char): 1 byte, usa comillas simples
    char inicial = 'A';

    printf("Edad: %d, Tamaño en memoria: %lu bytes\n", edad, sizeof(edad));
    printf("Altura: %.2f\n", altura);
    printf("Inicial: %c\n", inicial);

    return 0;
}