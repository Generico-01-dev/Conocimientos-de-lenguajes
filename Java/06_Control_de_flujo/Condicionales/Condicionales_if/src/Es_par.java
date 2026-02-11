import java.util.Scanner;

public class Es_par {
    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        
        System.out.print("Ingrese un numero entero: ");
        int numeroUsuario = leer.nextInt();
        
        if (numeroUsuario % 2 == 0) {
            System.out.println("El numero es par");
        } else {
            System.out.println("El numero es impar");
        }
    }
}
