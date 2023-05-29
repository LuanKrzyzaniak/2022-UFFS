import java.util.Scanner;
import java.util.Locale;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        
        int v[] = new int[10];

        for (int i = 0; i <10; i++){
            v[i] = sc.nextInt();
            if (v[i] <= 0){
                v[i] = 1;
            }
        }

        for (int i = 0; i < 10; i++){
            System.out.printf("X[%d] = %d%n", i, v[i]);
        }

        sc.close();
    }
}