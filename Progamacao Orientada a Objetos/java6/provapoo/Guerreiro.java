package prova;

public class Guerreiro extends Personagem{
	
	private int vida = 100;
	private int estamina = 100;
	private int dano=0;
	
	public Guerreiro(String nome, Perso perso) {
		super(nome);
		if(perso == Perso.MASC) {
			setForca(10);
			setInteligencia(5);
		}else {
			setForca(5);
			setInteligencia(10);
		}
	}
	
	public int powerATK() {
		
		if(getEstamina() >= 10) {				// powerATK consome 10 de estamina!
			setDano(getEstamina() * getForca());
			setEstamina(getEstamina() - 10);
		}
		
		return (int)dano;
	}

	public int getDano() {
		return dano;
	}

	public void setDano(int dano) {
		this.dano = dano;
	}

	public int getVida() {
		return vida;
	}

	public void setVida(int vida) {
		this.vida = vida;
	}

	public int getEstamina() {
		return estamina;
	}

	public void setEstamina(int estamina) {
		this.estamina = estamina;
	}

}
