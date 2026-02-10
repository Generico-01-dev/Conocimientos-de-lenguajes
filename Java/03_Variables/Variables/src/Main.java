public class Main {
    public static void main (String[] args){
        int a,b,c;
        String nombre = "Juan";
        int edad = 45;
        
        a = 1;
        b = 2;
        c = 3;
        
        System.out.println(nombre);
        System.out.println(edad);
        System.out.println(a + b + c);
        System.out.println("La edad de " + nombre + " es " + edad + " y tiene " + a + " hijo");
        
        //Otra forma de definir variables
        var primerNombre = "Prueba";
        //primerNombre = 15 Dará error porque ya se ha definido con la primera asignación el tipo de variable
        System.out.println(primerNombre);
        
        primerNombre = "Prueba2";
        System.out.println(primerNombre);
    
        
        //float f = 3.14; // Esto dará error porque no se ha puesto una f al final
        float f = 3.14f;
        long l = 46456516L; // Se debe poner una letra al final ya establecida para indicar el tipo (no en todos los casos)
        double d = 456.4564d;
        char letra = 'a';
        char codigoLetra = 65;
        System.out.println(f);
        System.out.println(l);
        System.out.println("Letra: " + letra);
        System.out.println("Codigo letra: " + codigoLetra);
        
        
        boolean opcionA = true;
        boolean opcionB = false;
        
    }
}
