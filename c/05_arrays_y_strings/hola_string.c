#include <stdio.h>

int main() {
    // STRING: Un array de caracteres. 
    // Reservamos espacio para 49 letras + 1 caracter de fin (\0)
    char nombre[50]; 

    printf("¿Como te llamas? (Sin apellidos): ");
    
    // OJO AL DATO:
    // 1. Para leer strings usamos %s
    // 2. El nombre del array YA es una dirección de memoria, 
    //    así que NO hace falta poner el '&' delante de 'nombre'.
    scanf("%s", nombre);

    printf("Hola, %s.\n", nombre);
    
    // Curiosidad: Vamos a ver qué hay en la primera letra y en la tercera
    printf("Tu inicial es: %c\n", nombre[0]);
    printf("La tercera letra es: %c\n", nombre[2]);

    return 0;
}