package exercicio2;

public class Nota {
	
	private String data;
	private int valor;
	
	public Nota(String data, int valor) {
		this.data = data;
		this.valor = valor;
	}

	public String getData() {
		return data;
	}

	public void setData(String data) {
		this.data = data;
	}

	public int getValor() {
		return valor;
	}

	public void setValor(int valor) {
		this.valor = valor;
	}
}
