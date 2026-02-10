import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner leer = new Scanner(System.in);
        
        System.out.print("Esctiba el numero 01: ");
        int numero01 = leer.nextInt();
        System.out.print("Escriba el numero 02: ");
        int numero02 = leer.nextInt();
        
        System.out.printf("La suma de ambos numeros es %d\n", numero01+numero02 );
    }
}
