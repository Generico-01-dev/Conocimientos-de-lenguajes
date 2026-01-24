#include <stdio.h>

int main() {
    int numero = 10;
    
    // El asterisco aqui indica que 'puntero' va a guardar una dirección de memoria
    int *puntero;
    
    // El & (ampersand) significa "Dame la dirección de..."
    puntero = &numero; 
    
    printf("--- DESGLOSE DE MEMORIA ---\n");
    printf("1. El valor de la variable 'numero' es: %d\n", numero);
    printf("2. La direccion de memoria de 'numero' es: %p\n", &numero);
    printf("3. El valor del 'puntero' (lo que guarda dentro) es: %p\n", puntero);
    
    // Usar * delante de un puntero ya creado significa: 
    // "Viaja a la dirección que tienes guardada y dime qué hay allí"
    printf("4. Lo que hay en la direccion a la que apunta 'puntero' es: %d\n", *puntero);
    
    // Si cambio el valor USANDO el puntero...
    *puntero = 20;
    printf("5. He cambiado el valor usando el puntero. Ahora 'numero' vale: %d\n", numero);

    return 0;
}