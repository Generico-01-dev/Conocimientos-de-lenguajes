#include <stdio.h>

int main() {
    int num;

    printf("¿De que numero quiere saber la tabla de multiplicar del 1 al 10?");
    scanf("%d", &num);


    for (int i = 0 ; i <= 10 ; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    
    return 0;
    
    
    
}