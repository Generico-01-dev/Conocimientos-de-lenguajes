
public class Funciones {
    public static void main(String[] args) {
        String nombre = "Juan";
        int edad = 25;
        int suma = sumarDevolver(15, 25);
        String cadena = saludarDevolver("Juan", 25);
        
        saludar("Juan",25);
        saludar(nombre, edad);
        sumar(10,40);
        System.out.println("La suma es " + suma);
        System.out.println(cadena);
        
        
        System.out.println("La suma de 10 + 20 es " + sumarDevolver(10, 20));
        System.out.println("La suma de 4,5 + 3,6 es " + sumaDecimales(4.5, 3.6));
    
        System.out.println("La suma de 10 + 20 es " + sumaSobrecarga(10, 20));
        System.out.println("La suma de 4,5 + 3,6 es " + sumaSobrecarga(4.5, 3.6));

    
        cuentaRegresiva(11);
        System.out.println("El factorial de 5 es " + factorial(5));
        
        System.out.println("La suma de 1 + 2 + 3 + 4 + 5 es igual a " + sumar(1,2,3,4,5));
    }
    
    static void sumar (int a, int b){
        int suma = a + b;
        System.out.println("La suma es " + suma);
    }
    
    /*Cuando no sabemos cuantos parametros vamos a necesitar
    en una funcion lo pondremos de esta forma, lo que creará
    una especie de array con todos los datos que hemos introducido.
    Para utilizar el array lo podremos hacer, por ejemplo con el for each
    que se ha explicado en el apartado para recorrer vectores.
    En este tipo de casos las variables de las que no sabemos el numero
    van al final*/
    static int sumar( int... numeros){
        int suma = 0;
        for (int num: numeros){
            suma = suma + num;
        }
        return suma;
        
    }
    
    /////////////////////////////////////
    //Se puede hacer de esta forma o por sobrecarga, mismos nombres, diferentes variables
    
    static double sumaDecimales (double a, double b){
        return a + b;
    }
    
    static int sumarDevolver(int a, int b){
        return a + b;
    }
    
    
    static int sumaSobrecarga (int a, int b){
        return a + b;
    }
   
    
    static double sumaSobrecarga (double a, double b){
        return a + b;
    }
    
    ///////////////////////////////////////////
    
    
    //Para que se ejecute debe ser ejecutado en el metodo main
    static void saludar (String nombre, int edad){
        System.out.println("Hola " + nombre + " de "+ edad + " anios");
    }
    
    static String saludarDevolver(String nombre, int edad){
        return "Hola " + nombre + " de " + edad + " anios"; 
    }
    
    
    //Ejemplo funcion recursiva
    static void cuentaRegresiva(int inicio){
       
        inicio --;
        if (inicio > 0) {
            System.out.println(inicio);
            cuentaRegresiva(inicio);
        } else {
            System.out.println("Ha llegado a 0");
        }
    }
    
    static int factorial (int numero) {
        if (numero > 1){
            numero = numero * factorial(numero - 1);
        }
        return numero;
    }
}
