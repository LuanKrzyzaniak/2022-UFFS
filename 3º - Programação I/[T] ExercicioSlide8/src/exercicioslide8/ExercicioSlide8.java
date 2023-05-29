package exercicioslide8;


public class ExercicioSlide8 {

    public static void main(String[] args) {
        Produto leite = new Produto("Leite",001, 4.50, "caixa de leite");
        Produto cafe = new Produto("Cafe", 002, 15.00, "vidro de cafe");
        Produto bife = new Produto("Bife", 003, 8.00, "bife maneiro");
        
        ItemPedido leites = new ItemPedido(leite, 6);
        ItemPedido cafes = new ItemPedido(cafe, 2);
        ItemPedido bifes = new ItemPedido(bife, 2);
        
        Pedido luan = new Pedido("Luan");
        
        luan.adicionarItem(leites);
        luan.adicionarItem(cafes);
        luan.adicionarItem(bifes);
        
        luan.printPedido();
    }
    
}
