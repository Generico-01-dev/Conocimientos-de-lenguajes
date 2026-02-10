package entrada_de_datos;

import java.util.Scanner; //Mediante esta línea importamos una clase que ya existe en java para la entrada de datos



public class Entrada_de_datos {
    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in); //Se crea un objeto de la clase scanner y se utilizarán sus métodos mediante "leer" -> El nombre que se le ha otorgado
        
        System.out.println("Escribe tu nombre: ");
        String nombre = leer.nextLine();
        System.out.println("Escribe tu edad: ");
        int edad = leer.nextInt();
        System.out.println("Esctibe tu letra favorita: ");
        char letra = leer.next().charAt(0); // Se accede al indice 0 ya que solo se va a leer la primera letra
        
        
        
        
        
        System.out.println("Tu nombre es " + nombre);
        System.out.println("Tu edad es " + edad);
        System.out.println("Tu letra es " + letra);
    
    
    }
    
}
