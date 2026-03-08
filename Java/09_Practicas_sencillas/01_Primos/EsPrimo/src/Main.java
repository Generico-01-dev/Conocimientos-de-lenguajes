import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        
        System.out.println("Ingrese un numero: ");
        int numero = leer.nextInt();
        
        if (esPrimo(numero)){
            System.out.println("========================");
            System.out.println("El numero es primo");
            System.out.println("========================");
        } else {
            System.out.println("========================");
            System.out.println("El numero NO es primo");
            System.out.println("========================");
        }
    }
    
    // No es para nada la forma mas eficiente, ya que se podrían hacer las divisiones y parar si encuentra un numero divisible
    static boolean esPrimo(int numero){
        int contador = 0;
        
        int numeros[] = new int[numero];
        for (int i = 0; i < numeros.length; i++){
            numeros[i] = i + 1;
        }
        
        for (int i: numeros){
            if (i == 1 || i == numero){
                continue;
            }
            
            if (numero % i == 0){
                contador ++;
            }
        }
        return contador == 0;
    }
}
