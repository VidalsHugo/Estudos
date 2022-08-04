package com.mycompany.ex2.Ex2;

public class Funcionaa {
    
    public static void main(String[] args) {
        Vendedor vendedor = new Vendedor("Hugo");
        Empresa empresa = new Empresa();
        
        
        Venda venda1 = new Venda("Janeiro", 1000.4f);
        Venda venda2 = new Venda("Fevereiro", 2500.5f);
        Venda venda3 = new Venda("Março", 100.0f);
        
        vendedor.vendas[0] = venda1;
        vendedor.vendas[1] = venda2;
        vendedor.vendas[2] = venda3;
        
        vendedor.calcularVenda();
        
        
        System.out.println("Vendedor " + vendedor.getNome());
        System.out.println("Comissões: " + vendedor.getMoney());
        System.out.println("Dinheiro da Empresa: " + empresa.getMoney());
    }
    
}
