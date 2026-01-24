#include <stdio.h>

// Prototipo: Fíjate que pide direcciones de memoria (int *)
void intercambiar(int *a, int *b);

int main() {
    int x = 10;
    int y = 20;
    
    printf("Antes: x = %d, y = %d\n", x, y);

    // No pasamos 'x' ni 'y'. Pasamos SUS DIRECCIONES con &
    intercambiar(&x, &y);
    
    printf("Despues: x = %d, y = %d\n", x, y);
    
    return 0;
}

// Recibimos punteros (direcciones), no variables normales
void intercambiar(int *a, int *b) {
    int temporal;
    
    // 1. Guardo el valor al que apunta 'a' en una variable temporal
    temporal = *a; 
    
    // 2. En la dirección de 'a', meto el valor que hay en la dirección de 'b'
    *a = *b;
    
    // 3. En la dirección de 'b', meto lo que guardé en temporal
    *b = temporal;
}