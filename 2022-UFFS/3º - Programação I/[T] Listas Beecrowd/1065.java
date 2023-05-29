import java.util.Scanner;
import java.util.Locale;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int a = 0, pairs = 0, number = 0;
        
        for (a = 0; a < 5; a++){
            number = sc.nextInt();
            if (number%2 == 0){
                pairs += 1;
            }
        }
        
        System.out.printf("%d valores pares%n", pairs);

        sc.close();
    }    
}
