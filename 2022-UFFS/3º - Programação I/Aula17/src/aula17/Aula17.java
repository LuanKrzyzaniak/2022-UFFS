package aula17;

public class Aula17 {

    public static double efetuarCalculo(Calculavel f, double a, double b){
        return f.calcular(a,b);
    }   
    
    public static void main(String[] args) {
        System.out.println("Resultado: " + efetuarCalculo((a, b)  -> a + b, 10, 15));
        
        Calculavel c = (x,y) -> (x + y )  * 2;
        System.out.println("Resultado: " + c.calcular(2,3));
    }
    
}
