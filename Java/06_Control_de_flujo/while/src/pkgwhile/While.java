
package pkgwhile;

public class While {
    public static void main(String[] args) {
        
        /* Estas lineas se imprimiran de forma indefinida ya que la condicion del while
        nunca cambiará
        
        while (true) {
            System.out.println("Esto se imprimirá de forma indefinida");
        }
        */
        
        int c = 0;
        int i = 1;
        while (c < 10) {
            System.out.printf("%d - El valor de c es %d\n",i,c);
            c++;
            i++;
        }
    }
    
}
