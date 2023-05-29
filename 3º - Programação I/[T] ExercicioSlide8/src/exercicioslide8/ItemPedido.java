package exercicioslide8;

public class ItemPedido {
    private Produto produto;
    private int quantia;
    
    public ItemPedido(Produto produto, int quantia){
        this.produto = produto;
        this.quantia = quantia;
    }
    
    public Produto getProduto(){
        return produto;
    }
    
    public int getQuantia(){
        return quantia;
    }
    
    public void setProduto(Produto produto){
        this.produto = produto;
    }
    
    public void setQuantia(int quantia){
        this.quantia = quantia;
    }
    
    public double getValor(){
        return produto.getValor();
    }
    
    public double getValorTotal(){
        return produto.getValor() * quantia;
    }
    
    public String getNome(){
        return produto.getNome();
    }
}
