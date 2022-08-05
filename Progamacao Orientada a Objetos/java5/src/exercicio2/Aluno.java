package exercicio2;

public class Aluno extends Pessoa{
	
	private int media=0;
	private int AllNotas;
	private int somatorio=0;
	
	Nota[] notas = new Nota[3];
	
	
	
	public Aluno(String nome, String cpf) {
		super(nome, cpf);
	}
	
	public void addNota(Nota[] nota) {
		this.notas = nota;
		
	}
	
	public int getMedia() {
		
		for(int i=0;i<notas.length;i++) {
			setAllNotas(getAllNotas() + notas[i].getValor());
			somatorio++;
		}
		
		media =getAllNotas() / somatorio;
		return media;
		
	}

	public int getAllNotas() {
		return AllNotas;
	}

	public void setAllNotas(int allNotas) {
		AllNotas = allNotas;
	}

	
	
}
