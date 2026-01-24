#include <stdio.h>

void intentar_cambiar_numero(int x);

int main() {
    int numero = 10;
    
    //Aqui el numero vale 10
    printf("1. En main, el numero vale: %d\n", numero);
    
    intentar_cambiar_numero(numero);
    
    // Ahora sigue valiendo 10
    printf("3. De vuelta en main, el numero vale: %d\n", numero);
    
    return 0;
}

void intentar_cambiar_numero(int x) {
    // Aquí 'x' es una COPIA de 'numero'. Son variables distintas en memorias distintas. El numero valdrá 50 (solo en esta funcion)
    x = 50;
    printf("2. Dentro de la funcion, lo hemos cambiado a: %d\n", x);
}