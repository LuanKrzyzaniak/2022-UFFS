import java.util.Scanner;

class Main {
    public static void main(String[] args){
        int a, b;

        Scanner sc = new Scanner(System.in);

        a = sc.nextInt();
        b = sc.nextInt();

        System.out.printf("X = %d%n", a + b);
        sc.close();
    }
}