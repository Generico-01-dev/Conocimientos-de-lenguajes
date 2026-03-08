import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        
        System.out.println("Introduce como de larga quieres la contrasena");
        int extension = leer.nextInt();
        
        System.out.println("Tu nueva contrasena es "+ generarPassword(extension));
    }
    
    static String generarPassword(int extension){
        char mayusculas[] = {'A','B','C','D','E'};
        char minusculas[] = {'w','t','c','b','o'};
        char numeros[] = {'1','5','8','7','9'};
        char simbolos[] = {'!',')','º','?','+'};
        
        StringBuilder caracteres = new StringBuilder();
        caracteres.append(mayusculas);
        caracteres.append(minusculas);
        caracteres.append(numeros);
        caracteres.append(simbolos);
        
        StringBuilder contrasena = new StringBuilder();
        
        for (int i = 0; i <= extension; i++){
            int cantidadCaracteres = caracteres.length();
            int numRandom = (int)(Math.random()*cantidadCaracteres);
            
            contrasena.append((caracteres.toString()).charAt(numRandom)); 
        }
        
        return contrasena.toString();
    }
    
}
