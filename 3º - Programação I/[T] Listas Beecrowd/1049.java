import java.util.Locale;
import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
    
        String class1, class2, class3;
        
        class1 = sc.nextLine();
        class2 = sc.nextLine();
        class3 = sc.nextLine();

        switch (class1){
            case "vertebrado":
                switch (class2){
                    case "ave":
                        switch (class3){
                            case "carnivoro":
                                System.out.printf("aguia%n");
                                break;
                            case "onivoro":
                                System.out.printf("pomba%n");
                                break;
                        }
                        break;
                    case "mamifero":
                        switch (class3){
                            case "onivoro":
                                System.out.printf("homem%n");
                                break;
                            case "herbivoro":
                                System.out.printf("vaca%n");
                                break;
                        }
                        break;
                }
                break;
            case "invertebrado":
                switch (class2){
                    case "inseto":
                        switch (class3){
                            case "hematofago":
                                System.out.printf("pulga%n");
                                break;
                            case "herbivoro":
                                System.out.printf("lagarta%n");
                                break;
                        }
                        break;
                    case "anelideo":
                        switch (class3){
                            case "hematofago":
                                System.out.printf("sanguessuga%n");
                                break;
                            case "onivoro":
                                System.out.printf("minhoca%n");
                                break;
                        }
                        break;
                }
                break;
        }

        sc.close();
    }
}