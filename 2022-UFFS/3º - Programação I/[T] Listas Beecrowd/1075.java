import java.util.Scanner;
import java.util.Locale;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int n, a;
        n = sc.nextInt();

        for (a=1; a<=10000; a++){
            if (a%n == 2){
                System.out.printf("%d%n", a);
            }
        }
        

        sc.close();
    }    
}