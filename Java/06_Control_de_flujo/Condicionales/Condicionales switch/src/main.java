import java.util.Scanner;
public class main {
    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        
        
        System.out.println("Ingrese un numero de dia de la semana (1 - 7): ");
        int dia = leer.nextInt();
        
        String diaSemana = null;
        switch (dia) {
            case 1:
                diaSemana = "Lunes";
                break;
            case 2:
                diaSemana = "Martes";
                break;
            case 3:
                diaSemana = "Miercoles";
                break;
            case 4:
                diaSemana = "Jueves";
                break;
            case 5:
                diaSemana = "Viernes";
                break;
            case 6:
                diaSemana = "Sabado";
                break;
            case 7:
                diaSemana = "Domingo";
                break;
            default:
                System.out.println("El numero ingresado es INCORRECTO");;
        }
        
        if (diaSemana != null){
            System.out.println("El dia de la semana es " + diaSemana);
        }
        
    }
}
