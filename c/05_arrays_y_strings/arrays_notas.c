#include <stdio.h>

int main() {
    float notas[5]; 
    float suma = 0;
    float promedio;

    printf("--- CALCULO DE PROMEDIO ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Ingresa la nota %d: ", i + 1);
        scanf("%f", &notas[i]); 

        suma = suma + notas[i];
    }

    promedio = suma / 5;

    // 3. MOSTRAR RESULTADOS
    printf("\nHas ingresado estas notas:\n");
    for (int i = 0; i < 5; i++) {
        // %.1f muestra solo 1 decimal
        printf("Nota %d: %.1f\n", i + 1, notas[i]); 
    }

    printf("\nPromedio final: %.2f\n", promedio);

    return 0;
}