package exercicio;

public class Fatura {
	
	private String nome;
	private String cpf;
	private double calculo=0;
	
	public Fatura(String nome, String cpf){
		this.nome = nome;
		this.cpf = cpf;
	}
	
	Item[] itens = new Item[3];
	
	
	public double obtemPreco() {
		for(int i=0; i<itens.length;i++) {
			setCalculo(getCalculo() + (itens[i].getPrecoUnitario() * itens[i].getQuantidade()));
		}
		return getCalculo();
	}
	public void adicionarItem(Item[] item) {
		this.itens = item;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getCpf() {
		return cpf;
	}
	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
	public double getCalculo() {
		return calculo;
	}
	public void setCalculo(double calculo) {
		this.calculo = calculo;
	}
	
}
