import java.util.Locale;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int x,y;

        x = sc.nextInt();
        y = sc.nextInt();

        if (x % y == 0 || y % x == 0){
            System.out.printf("Sao Multiplos%n");
        } else {
            System.out.printf("Nao sao Multiplos%n");
        }

        sc.close();
    }
}
