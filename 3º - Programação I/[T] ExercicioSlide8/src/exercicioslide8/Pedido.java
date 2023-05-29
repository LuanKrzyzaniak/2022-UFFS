package exercicioslide8;

import java.lang.String;

public class Pedido {
    private ItemPedido itens[];
    private double valorTotal;
    private int index;
    private String nome;
    
    public Pedido(String nome){
        itens = new ItemPedido[30];
        valorTotal = 0;
        index = 0;
        this.nome = nome;
    }
    
    public void adicionarItem(ItemPedido item){
        valorTotal += item.getValorTotal();
        itens[index++] = item;
        System.out.printf("ITEM ADICIONADO: %d x %s a R$%.2f%n", itens[index-1].getQuantia(), itens[index-1].getNome(), itens[index-1].getValor());
        System.out.printf("Novo valor total: %.2f%n", valorTotal);
    }
    
    public void printPedido(){
        System.out.printf("%nPEDIDO %s%n", nome);
        for (int i = 0; i<index; i++){
            System.out.printf("%d x %s a R$%.2f | Valor: %.2f%n", itens[i].getQuantia(), itens[i].getNome(), itens[i].getValor(), itens[i].getValorTotal());
        }
        System.out.printf("%nVALOR TOTAL: %.2f%n", valorTotal);
    }

    public ItemPedido[] getItens() {
        return itens;
    }

    public double getValorTotal() {
        return valorTotal;
    }

    public int getIndex() {
        return index;
    }

    public String getNome() {
        return nome;
    }

    public void setItens(ItemPedido[] itens) {
        this.itens = itens;
    }

    public void setValorTotal(double valorTotal) {
        this.valorTotal = valorTotal;
    }

    public void setIndex(int index) {
        this.index = index;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    
}
