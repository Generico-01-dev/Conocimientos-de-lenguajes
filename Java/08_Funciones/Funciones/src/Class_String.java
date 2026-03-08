
public class Class_String {
    public static void main(String[] args) {
        //charAt: De esta forma se accede al indice de una cadena
        String nombre = "Azul";
        System.out.println("El tercer caracter es " + nombre.charAt(2));
    
        //length: De esta forma sabemos la cantidad de caractes que contiene una String
        System.out.println("Cantidad de caracteres " + nombre + ": " + nombre.length());
        
        for (int i = 0; i < nombre.length(); i++){
            System.out.println(nombre.charAt(i));
        }
        
        System.out.println("Las primeras dos letras de la palabra Azul son " + nombre.substring(0, 2));
        
        System.out.println("Todo minusculas: " + nombre.toLowerCase());
        System.out.println("Todo mayusculas " + nombre.toUpperCase());
    
        nombre = "A z u l";
        System.out.println(nombre + " ------> " + nombre.replace(" ", "-"));
        System.out.println(nombre + " ------> " + nombre.replace(" ", ""));
        
        System.out.println("Hola" == "Hola");
        System.out.println("Hola".equals("Hola")); //Mejor utilizar esta forma 
        
        StringBuilder nuevo = new StringBuilder();
        System.out.println("Stringbuilder: " + nuevo);
        
        nuevo.append("Hola");
        System.out.println("Stringbuilder: " + nuevo);
    
    }
}
