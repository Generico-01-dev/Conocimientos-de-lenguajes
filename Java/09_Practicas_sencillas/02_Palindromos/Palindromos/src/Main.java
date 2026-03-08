import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        
        System.out.println("Introduce la palabra: ");
        String palabra = leer.nextLine();
        
        if (esPalindromo(palabra)){
            System.out.println("==============");
            System.out.println("La palabra es un palindromo");
            System.out.println("==============");
        } else {
            System.out.println("==============");
            System.out.println("La palabra NO es un palindromo");
            System.out.println("==============");
        }
        
        
    }
    
    static boolean esPalindromo(String palabra){
        palabra = palabra.replace(" ", "");
        palabra = palabra.toLowerCase();
        
        for (int i = 0 ; i < palabra.length()/2; i++)
            if (palabra.charAt(i) != palabra.charAt(palabra.length() - 1 - i)) {
                return false;
            }
        return true;
    }
}
