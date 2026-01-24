#include <stdio.h>
#include <stdlib.h> // NECESARIA para malloc y free

int main() {
    // 1. Declaramos un puntero (el mapa del tesoro)
    int *puntero;
    
    // 2. PEDIMOS MEMORIA (MALLOC)
    puntero = (int*)malloc(sizeof(int));
    
    // Si el ordenador no tiene RAM, malloc devuelve NULL.
    if (puntero == NULL) {
        printf("Error: No hay memoria disponible.\n");
        return 1; // Salimos con error
    }
    
    // 3. USAMOS LA MEMORIA
    *puntero = 42; 
    
    printf("El valor guardado en la memoria dinamica es: %d\n", *puntero);
    
    // ¡CRUCIAL! Si olvidas esto, esa memoria queda "zombie" hasta reiniciar.
    free(puntero);
    
    return 0;
}