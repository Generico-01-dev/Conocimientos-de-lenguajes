#include <stdio.h>

//-- 1. Avisamos al compilador de que existen estas funciones --
void saludar();                  // void = No devuelve nada
int calcular_area(int lado);     // Recibe un int, devuelve un int
float promedio(float a, float b);// Recibe dos floats, devuelve un float

// --- 2. FUNCIÓN PRINCIPAL (El jefe) ---
int main() {
    int l = 5;
    int area;
    
    saludar();
    
    // Llamamos a la función que devuelve algo y guardamos el resultado
    area = calcular_area(l);
    printf("El area de un cuadrado de lado %d es: %d\n", l, area);
    
    // Podemos llamar a una función directamente dentro de un printf
    printf("El promedio de 4.5 y 6.2 es: %.2f\n", promedio(4.5, 6.2));
    
    return 0;
}

// --- 3. DEFINICIONES ---

void saludar() {
    printf("--- BIENVENIDO AL PROGRAMA DE FUNCIONES ---\n");
    printf("Todo esto se imprime desde una funcion auxiliar.\n\n");
}

int calcular_area(int lado) {
    int resultado = lado * lado;
    return resultado; // Devolvemos el dato al 'main'
}

float promedio(float a, float b) {
    return (a + b) / 2.0;
}