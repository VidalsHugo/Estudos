package exercicio;

public class Main {
	public static void main(String[] args) {
		
		Fatura fatura = new Fatura("Hugo", "999.999-99");
		
		Item item0 = new Item("Lapis", 100f, 2);
		Item item1 = new Item("Garrafinha Ultron", 2.5f, 1);
		Item item2 = new Item("Luiz", 500.5f, 3);
		
		fatura.itens[0] = item0;
		fatura.itens[1] = item1;
		fatura.itens[2] = item2;
		
		fatura.adicionarItem(fatura.itens);
		fatura.obtemPreco();
		
		System.out.println("nome: " + fatura.getNome() + " CPF: " + fatura.getCpf() + " Fatura: " + fatura.getCalculo());
	}
}
