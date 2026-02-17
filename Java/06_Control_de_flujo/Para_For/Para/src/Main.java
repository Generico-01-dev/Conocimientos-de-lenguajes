import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        
        System.out.println("Escriba la tabla de multiplicacion que desea: ");
        int n = leer.nextInt();
       
        
        for (int i = 0; i <= 10; i++){
            System.out.printf("%d * %d = %d\n", i, n, i*n);
            
            if (i == 3){
                continue; // Cuando se utiliza pasa a la siguiente iteracion del bucle
            }
            System.out.println("Mensaje de prueba. No ejecutar en 3");
            
            if ( i == 5){
                System.out.println("Detener bucle for");
                break; // Se utiliza para detener buvles while y for
            }
        }
    }
}
