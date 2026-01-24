#include <stdio.h>
#include <stdlib.h>

int main() {
    int *lista;
    int cantidad;
    
    printf("¿Cuantos numeros quieres guardar?: ");
    scanf("%d", &cantidad);
    
    // RESERVA DINÁMICA
    // Quiero espacio para 'cantidad' veces el tamaño de un entero.
    // Ej: Si pide 10 números, reserva 40 bytes (10 * 4 bytes).
    lista = (int*)malloc(cantidad * sizeof(int));
    
    if (lista == NULL) {
        printf("Error de memoria.\n");
        return 1;
    }
    
    // RELLENAR EL ARRAY
    // C trata los punteros y los arrays casi igual.
    for (int i = 0; i < cantidad; i++) {
        lista[i] = (i + 1) * 10; // Guardamos 10, 20, 30...
    }
    
    // MOSTRAR
    printf("\n--- TU LISTA DINAMICA ---\n");
    for (int i = 0; i < cantidad; i++) {
        printf("Posicion %d: %d\n", i, lista[i]);
    }
    
    // LIBERAR
    free(lista);
    printf("\nMemoria liberada correctamente.\n");
    
    return 0;
}