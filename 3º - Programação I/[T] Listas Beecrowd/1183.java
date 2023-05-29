import java.util.Scanner;
import java.util.Locale;

class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        float m[][] = new float[12][12];
        float sum = 0;
        int numbers = 0;
        char O;
        
        O = sc.next().charAt(0);

        for (int i = 0; i <12; i++){
            for (int j = 0; j<12; j++){
                m[i][j] = sc.nextFloat();
            }
        }

        for (int i = 0; i <11; i++){
            for (int j = i+1; j<12; j++){
                sum += m[i][j];
                numbers += 1;
            }
        }

        if (O == 'S'){
            System.out.printf("%.1f%n", sum);
        } else if (O == 'M'){
            System.out.printf("%.1f%n", sum/numbers);
        }
        
        sc.close();
    }
}