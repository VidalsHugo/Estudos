package prova;

abstract class Item {
	
	private String nome;
	private final int forca, inteligencia, vida;
	
	
	public Item(String nome, int forca, int inteligencia, int vida) {
		this.nome = nome;
		this.forca = forca;
		this.inteligencia = inteligencia;
		this.vida = vida;
	}
	
	public String getNome() {
		return nome;
	}

	public int getForca() {
		return forca;
	}

	public int getInteligencia() {
		return inteligencia;
	}

	public int getVida() {
		return vida;
	}
	
}
