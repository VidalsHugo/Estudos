package prova;

public class Fases {

	private final String nome;
	private int  dificuldade=1;
	private int maxDificuldade=5;
	private static int numPerso;
	
	public Fases(String nome, int numPerso) {
		this.nome = nome;
		Fases.numPerso = numPerso;
	}
	
	public void difFase() {
		setDificuldade(1 + getNumPerso());
		if(getDificuldade() > 5) {
			setDificuldade(maxDificuldade);
		}
	}

	public String getNome() {
		return nome;
	}
	public int getDificuldade() {
		return dificuldade;
	}
	public void setDificuldade(int dificuldade) {
		this.dificuldade = dificuldade;
	}
	public static int getNumPerso() {
		return numPerso;
	}
	public void setNumPerso(int numPerso) {
		Fases.numPerso = numPerso;
	}
	
	
}
