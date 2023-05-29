import java.util.Scanner;
import java.util.Locale;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int a = 0, positives = 0;
        float number = 0, positivesSum = 0;
        
        for (a = 0; a < 6; a++){
            number = sc.nextFloat();
            if (number > 0){
                positives += 1;
                positivesSum += number;
            }
        }
        
        System.out.printf("%d valores positivos%n", positives);
        System.out.printf("%.1f%n", positivesSum/positives);
        sc.close();
    }
    
}