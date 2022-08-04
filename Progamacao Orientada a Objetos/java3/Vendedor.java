
package com.mycompany.ex2.Ex2;

public class Vendedor{
    
    private Empresa microsoft;
    private float money=0;
    private String nome;
    
    Venda[] vendas = new Venda[3];
    
    public Vendedor(String nome){
        this.nome = nome;
    }
    
    public void calcularVenda(){
        for(int i=0;i<3;i++){
            if(vendas[i].getValor() <= 2000){
                this.setMoney((5/100) * vendas[i].getValor());
                microsoft.setMoney((95/100) * vendas[i].getValor());
            }else{
                this.setMoney((10/100) * vendas[i].getValor());
                microsoft.setMoney((90/100) * vendas[i].getValor());
            }
        }   
    
    }

    public float getMoney() {
        return money;
    }

    public void setMoney(float money) {
        this.money = money;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    
}
