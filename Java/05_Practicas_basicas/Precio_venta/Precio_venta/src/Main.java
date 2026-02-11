import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        
        System.out.print("Ingrese el valor de venta: ");
        double valorVenta = leer.nextFloat();
        double valorIVA = valorVenta * 0.21;
        double precioVenta = valorIVA + valorVenta;
        
        
        System.out.println("Valor de venta: "+ valorVenta);
        System.out.println("Valor de IVA: "+ valorIVA);
        System.out.println("Precio de venta: "+ precioVenta);
    }
}
