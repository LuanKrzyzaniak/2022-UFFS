import java.util.Scanner;
import java.util.Locale;

class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int v[] = new int[20];


        for (int i = 0; i <20; i++){
            v[i] = sc.nextInt();
        }
        
        for (int i = 0; i <10; i++){
            int aux = v[i];
            v[i] = v[19-i];
            v[19-i] = aux;
        }

        for (int i=0; i<20; i++){
            System.out.printf("N[%d] = %d%n", i, v[i]);
        }
        
        sc.close();
    }
}