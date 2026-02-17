
public class Recorrer_array {
    public static void main(String[] args) {
        
        String nombres[] = {"Juan", "Alberto", "Maria", "Angela", "Daniel"};
        
        int c = 0;
        
        System.out.println("Impresion mediante while");
        while ( c < nombres.length){
            System.out.println("Nombre " + c + ": " + nombres[c]);
            c++;
        }
        
        System.out.println("\nImpresion mediante for");
        for(int i = 0; i < nombres.length; i++){
            System.out.println("Nombre " + i + ": " + nombres[i]);
        }
        
        System.out.println("\nImpresion mediante for each");
        for(String dato:nombres){
            System.out.println(dato);
        }
    }
}
