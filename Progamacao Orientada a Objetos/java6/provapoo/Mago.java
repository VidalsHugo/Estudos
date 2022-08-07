package prova;

public class Mago extends Personagem{
	
	private int vida = 100;
	private int mana = 100;
	private int dano=0;

	public Mago(String nome, Perso perso) {
		super(nome);
		if(perso == Perso.MASC) {
			setForca(10);
			setInteligencia(5);
		}else {
			setForca(5);
			setInteligencia(10);
		}
	}

	public int mageATK() {
		
		if(getMana() >=10) {					//mageATK consome 10 de mana!
			setDano(getMana() * getInteligencia());
			setMana(getMana() - 10);
		}
		
		return (int)dano;
	}
	
	public int getVida() {
		return vida;
	}

	public void setVida(int vida) {
		this.vida = vida;
	}

	public int getMana() {
		return mana;
	}

	public void setMana(int mana) {
		this.mana = mana;
	}

	public int getDano() {
		return dano;
	}

	public void setDano(int dano) {
		this.dano = dano;
	}
	
	
	
	
}
