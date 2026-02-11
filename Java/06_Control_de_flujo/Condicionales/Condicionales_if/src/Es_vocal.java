import java.util.Scanner;
public class Es_vocal {
    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        
        System.out.println("Ingrese una letra: ");
        char c = leer.next().charAt(0);
        
        //Hay maneras mas comodas o distintas de hacerlo como pasar todas a mayúscula ahorrando una comparación. También se puede usar switch
        //Si lo hiciera con strings podría usarse el metodo .equals
        if (c == 'a' || c == 'A'){
            System.out.printf("%c es VOCAL\n", c);
        } else if (c == 'e' || c == 'E') {
            System.out.printf("%c es VOCAL\n", c);
        } else if (c == 'i' || c == 'I') {
            System.out.printf("%c es VOCAL\n", c);
        } else if (c == 'o' || c == 'O') {
            System.out.printf("%c es VOCAL\n", c);
        } else if (c == 'u' || c == 'U') {
            System.out.printf("%c es VOCAL\n", c);
        } else {
            System.out.printf("%c NO es VOCAL\n", c);
        }
    }
}
