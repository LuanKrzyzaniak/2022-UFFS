import java.util.Scanner;
import java.util.Locale;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int n, a;
        n = sc.nextInt();

        for (a=1; a<=10; a++){
           System.out.printf("%d x %d = %d%n", a, n, a*n);
        }

        sc.close();
    }    
}