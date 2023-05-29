import java.util.Scanner;
import java.util.Locale;

class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int v[] = new int[10];
        v[0] = sc.nextInt();
        for (int i=1; i<10; i++){
            v[i] = v[i-1] * 2;
        }
        
        for (int i=0; i<10; i++){
            System.out.printf("N[%d] = %d%n", i, v[i]);
        }

        sc.close();
    }
}
