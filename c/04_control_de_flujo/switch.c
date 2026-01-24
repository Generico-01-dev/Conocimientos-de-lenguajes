#include <stdio.h>

int main() {
    int eleccion;

    printf("Seleccione una opcion: \n");
    printf("1. Saludar\n");
    printf("2. Despedirse\n");
    printf("3. Preguntar como estas\n");
    printf("Ingrese el numero de su eleccion: ");
    scanf("%d", &eleccion);

    switch (eleccion) {
        case 1:
            printf("Hola!\n");
            break;
        case 2:
            printf("Adios!\n");
            break;
        case 3:
            printf("Como estas?\n");
            break;
        default:
            printf("Opcion no valida.\n");
    }
    return 0;
}