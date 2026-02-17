
public class Main {
    public static void main(String[] args) {
        String nombres [];  // De esta forma sabemos que es un array
        nombres = new String[3]; // Se almacenarán 3 datos de tipo String
        
        //Tambien se puede hacer en una linea
        int prueba[] = new int[10];
        
        //Relleno de array
        nombres[0] = "Juan";
        nombres[1] = "Benito";
        nombres[2] = "Luis";
        //nombres[3] = "Roberto"; //Este no se puede crear porque solo podemos hacer hasta 3 y empieza siempre en 0
        
        System.out.println("El primer nombre es " + nombres[0]);
        System.out.println("El segundo nombre es " + nombres[1]);
        System.out.println("El tercer nombre es " + nombres[2]);
        
        nombres[2] = "BENITO 2";
        System.out.println("Ahora el tercer nombre es "+ nombres[2]);
        
        System.out.println("El numero de datos que hay en el array es " + nombres.length);
        
        //Tambien podemos crear una array con elementos ya definidos
        int array_1[] = {1,2,3,4,5};
        System.out.println("Indice 0 = " + array_1[0]);
        
        array_1[0] = 100;
        System.out.println("Indice 0 nuevo = " + array_1[0]);
        
        System.out.println("Longitud array_1 = " + array_1.length);

    }
}
