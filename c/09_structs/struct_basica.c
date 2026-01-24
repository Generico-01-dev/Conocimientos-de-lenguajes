#include <stdio.h>
#include <string.h> // Necesaria para usar strcpy

// 1. DEFINICIÓN DE LA ESTRUCTURA (La Plantilla)
struct Personaje {
    char nombre[50];
    int nivel;
    float salud;
};

int main() {
    struct Personaje heroe;

    // 3. RELLENAR DATOS
    // Para números usamos el operador punto (.)
    heroe.nivel = 1;
    heroe.salud = 100.5;

    // Para strings NO podemos hacer: heroe.nombre = "Link";
    // Tenemos que usar la función strcpy (String Copy)
    strcpy(heroe.nombre, "Caballero de C");

    // 4. USAR LOS DATOS
    printf("--- FICHA DE PERSONAJE ---\n");
    printf("Nombre: %s\n", heroe.nombre);
    printf("Nivel: %d\n", heroe.nivel);
    printf("Salud: %.1f\n", heroe.salud);

    return 0;
}