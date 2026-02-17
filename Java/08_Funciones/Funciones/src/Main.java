
public class Main {
    public static void main(String[] args) {
        //Llamar a la funcion
        saludar("Alex");
        
        //Llamar a un metodo
        Main s = new Main();
        s.miMetodo("Hola Mundo");
    }
    
    //Definicion de una funcion
    static void saludar (String nombre){
        System.out.println("Hola "+ nombre + " desde la funcion");
    }
    
    public void miMetodo (String saludo){
        System.out.println(saludo);
    }
}
    