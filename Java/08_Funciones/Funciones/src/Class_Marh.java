
public class Class_Marh {
    public static void main(String[] args) {
        System.err.println(Math.PI);
        System.err.println(Math.E);
        
        
        System.err.println(Math.pow(2, 5));
        
        System.err.println(Math.random());
        
        //De esta forma se saca un numero random
        var numero0A100 = Math.random()*101;
        
        // De esta forma se hacen casts (importantes los parentesis)
        var numero0A100Entero = (int) (Math.random()*101);
        
        
        System.out.println("Este es el numero entero: " + numero0A100Entero);
        
        System.out.println("Asi se hacen raices cuadradas: \nRaiz cuadrada de 100 = " + Math.sqrt(100));
        
        System.out.println("Numero maximo entre 1 y 2 = " + Math.max(1, 2));
        System.out.println("Numero minimo entre 1 y 2 = " + Math.min(1, 2));
        
        System.out.println("El redondeo de 5.8 es " + Math.round(5.8));
        
        //El 100d indica los decimales que va a conservar 
        double moneda = (double) Math.round(3.4825 * 100d)/100;
        System.out.println(moneda);
        
        
    }
   
}
