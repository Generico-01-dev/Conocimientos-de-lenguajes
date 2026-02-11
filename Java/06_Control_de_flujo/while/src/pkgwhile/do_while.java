
package pkgwhile;

public class do_while {
    public static void main(String[] args) {
        
        int c = 0;
        do{
            System.out.println("Esto se imprimira una vez");
        }while (c != 0);
        
        
        
        do {
            System.out.println("IMPRESION " + c);
            c++;
        } while (c < 10);
        
        // Esto también se repetirá indefinidamente
        int i = 0;
        do {
            System.out.printf("Prueba %d\n", i);
            i++;
        } while (true);
    }
}
