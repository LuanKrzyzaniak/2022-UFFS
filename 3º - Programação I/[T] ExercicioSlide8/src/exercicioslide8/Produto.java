package exercicioslide8;

public class Produto {
    private String nome;
    private int codigo;
    private double valor;
    public String descr;
    
    public Produto(String nome, int codigo, double valor, String descr){
        this.nome = nome;
        this.codigo = codigo;
        this.valor = valor;
        this.descr = descr;
    }

    public int getCodigo() {
        return codigo;
    }

    public String getDescr() {
        return descr;
    }
    
    public double getValor(){
        return valor;
    }
    
    public String getNome(){
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }

    public void setDescr(String descr) {
        this.descr = descr;
    }
}
