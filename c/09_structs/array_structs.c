#include <stdio.h>

// typedef
// Esto dice: "El tipo 'struct Producto_s' ahora se puede llamar simplemente 'Producto'"
// Así nos ahorramos escribir la palabra 'struct' todo el rato.
typedef struct {
    int id;
    char nombre[30];
    float precio;
} Producto;

int main() {
    // Creamos un array de 3 huecos. Cada hueco es una ficha completa.
    Producto tienda[3];

    printf("--- INTRODUCE LOS DATOS DEL INVENTARIO ---\n");

    // Bucle para rellenar
    for (int i = 0; i < 3; i++) {
        tienda[i].id = i + 1; // ID automático (1, 2, 3)
        
        printf("Producto %d - Nombre: ", i + 1);
        scanf("%s", tienda[i].nombre); 
        
        printf("Producto %d - Precio: ", i + 1);
        scanf("%f", &tienda[i].precio);
    }

    printf("\n--- LISTA DE VENTA ---\n");
    printf("ID \t Nombre \t Precio\n"); 
    
    // Bucle para leer
    for (int i = 0; i < 3; i++) {
        // Accedemos a: array[posicion].campo
        printf("%d \t %s \t %.2f \n", tienda[i].id, tienda[i].nombre, tienda[i].precio);
    }

    return 0;
}