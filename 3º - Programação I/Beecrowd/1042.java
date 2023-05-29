import java.util.Locale;
import java.util.Scanner;
import java.util.Arrays;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        
        int x, y, z;
        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();
        int[] array = {x, y, z};
        int[] sortedArray = new int[3];
        
        System.arraycopy(array, 0, sortedArray, 0, 3);
        Arrays.sort(sortedArray);

        System.out.printf("%d%n%d%n%d%n", sortedArray[0], sortedArray[1], sortedArray[2]);

        System.out.printf("%n%d%n%d%n%d%n", array[0], array[1], array[2]);

        sc.close();
    }
}
