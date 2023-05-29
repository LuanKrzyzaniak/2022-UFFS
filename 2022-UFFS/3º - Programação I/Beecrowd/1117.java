import java.util.Scanner;
import java.util.Locale;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int aceitas = 0;
        float nota, notaTotal = 0;

        while (aceitas < 2){
            nota = sc.nextFloat();
            if (nota >= 0 && nota <= 10){
                notaTotal += nota;
                aceitas ++;
            } else { System.out.println("nota invalida"); }
        }
        System.out.printf("media = %.2f%n", notaTotal/2);

        sc.close();
    }    
}