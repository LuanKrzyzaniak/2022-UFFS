    import java.util.Locale;
    import java.util.Scanner;

    class Main {
        public static void main(String[] args){
            Scanner sc = new Scanner(System.in).useLocale(Locale.US);

            int total, rest, hundredNotes, fiftyNotes, twentyNotes, tenNotes, fiveNotes, twoNotes, oneNotes;

            total = sc.nextInt();
            rest = total;

            hundredNotes = rest/100;
            rest %= 100;
            fiftyNotes = rest/50;
            rest %= 50;
            twentyNotes = rest/20;
            rest %= 20;
            tenNotes = rest/10;
            rest %= 10;
            fiveNotes = rest/5;
            rest %= 5;
            twoNotes = rest/2;
            rest %= 2;
            oneNotes = rest;

            System.out.printf("%d%n", total);
            System.out.printf("%d nota(s) de R$ 100,00%n%d nota(s) de R$ 50,00%n%d nota(s) de R$ 20,00%n%d nota(s) de R$ 10,00%n%d nota(s) de R$ 5,00%n%d nota(s) de R$ 2,00%n%d nota(s) de R$ 1,00%n", hundredNotes, fiftyNotes, twentyNotes, tenNotes, fiveNotes, twoNotes, oneNotes);

            sc.close();
        }
    }
