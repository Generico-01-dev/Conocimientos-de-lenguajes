#include <stdio.h>

int main() {
    int a,b;

    printf("Ingrese el valor que quiere multiplicar: ");
    scanf("%d", &a);

    printf("Ingrese hasta que numero quiere multiplicar: ");
    scanf("%d", &b);

    while (b >= 0 ) {
        printf("%d * %d = %d\n", a, b, a * b);
        b--;
    }
    return 0;
}