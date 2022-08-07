package prova;

enum Modo{ATIVO, PAUSADO, GAMEOVER};

public class Jogo {
	
	private Modo modo;
	
	private int estado;
	
	Fases[] listaFases = new Fases[1];
	
	Personagem[] listaPerso = new Personagem[Fases.getNumPerso()];
	
	public int getEstado() {
		return estado;
	}
	public void setEstado(int estado) {
		
	}
	public Fases[] getListaFases() {
		return listaFases;
	}
	public void setListaFases(Fases[] listaFases) {
		this.listaFases = listaFases;
	}
	public Personagem[] getListaPerso() {
		return listaPerso;
	}
	public void setListaPerso(Personagem[] listaPerso) {
		this.listaPerso = listaPerso;
	}
	
}
