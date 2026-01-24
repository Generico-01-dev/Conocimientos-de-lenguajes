#include <stdio.h>

int main() {
    float num1, num2;

    printf("Ingresa el primer numero: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);

    printf("Suma: %f\n", num1 + num2);
    printf("Resta: %f\n", num1 - num2);
    printf("Multiplicacion: %f\n", num1 * num2);
    
    if (num2 == 0) {
        printf("Error: Division por cero no permitida");
    } else {
        printf("Division: %f\n", num1/num2);
        printf("Modulo: %f\n", (int)num1 % (int)num2);
    }
    return 0;
}