package prova;

enum Perso{
	MASC, FEM;
}

abstract class Personagem {
	
	private final String nome;
	private int pontuacao, forca, inteligencia, vida;
	
	Item[] listaItens = new Item[3];
	
	public Personagem(String nome) {
		this.nome = nome;
	}

	public String getNome() {
		return nome;
	}

	public int getPontuacao() {
		return pontuacao;
	}

	public void setPontuacao(int pontuacao) {
		this.pontuacao = pontuacao;
	}

	public int getForca() {
		return forca;
	}

	public void setForca(int forca) {
		this.forca = forca;
	}

	public int getInteligencia() {
		return inteligencia;
	}

	public void setInteligencia(int inteligencia) {
		this.inteligencia = inteligencia;
	}

	public int getVida() {
		return vida;
	}

	public void setVida(int vida) {
		this.vida = vida;
	}

}
