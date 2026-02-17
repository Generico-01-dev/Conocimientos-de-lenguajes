
public class Main {
    public static void main(String[] args) {
        
        int matriz[][] = new int[2][3];
        
        //De esta manera rellenamos la matriz de la forma mas simple posible
        matriz[0][0] = 1; 
        matriz[0][1] = 2; 
        matriz[0][2] = 3;
        
        matriz[1][0] = 4; 
        matriz[1][1] = 5; 
        matriz[1][2] = 6; 
        
        
        for (int matrizInterna[]: matriz){
            for (int dato: matrizInterna){
                System.out.println(dato);
            }
        }
        
        
        System.out.println("");
        //Otra forma de rellenarla
        int matriz2[][] = {
            {1,2,3},
            {4,5,6},
            {7,8}};
        
        for (int matrizInterna2[]: matriz2){
            for (int dato2: matrizInterna2){
                System.out.println(dato2);
            }
        }
        
        
        
        
    }
}
