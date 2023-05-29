import java.util.Scanner;
import java.util.Locale;

class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        float m[][] = new float[12][12];
        float sum = 0;
        char T;
        int line;

        line = sc.nextInt();
        T = sc.next().charAt(0);

        for (int i = 0; i <12; i++){
            for (int j = 0; j<12; j++){
                m[i][j] = sc.nextFloat();
            }
        }

        for (int j=0; j<12; j++){
            sum += m[line][j];
        }

        if (T == 'S'){
            System.out.printf("%.1f%n", sum);
        } else if (T == 'M'){
            System.out.printf("%.1f%n", sum/12);
        }
        
        sc.close();
    }
}