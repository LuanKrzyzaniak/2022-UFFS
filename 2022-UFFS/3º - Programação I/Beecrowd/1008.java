import java.util.Locale;
import java.util.Scanner;

class Main {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int number, hours;
        float salary;

        number = sc.nextInt();
        hours = sc.nextInt();
        salary = sc.nextFloat();

        System.out.printf("NUMBER = %d%nSALARY = U$ %.2f%n", number, salary * hours);

        sc.close();
    }    
}