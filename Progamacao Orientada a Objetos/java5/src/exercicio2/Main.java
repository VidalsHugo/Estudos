package exercicio2;

public class Main {
	public static void main(String[] args) {
		
		Aluno aluno1 = new Aluno("Hugo", "999.888-77");
		
		Nota nota0 = new Nota("Janeiro", 10);
		Nota nota1 = new Nota("Agosto", 5);
		Nota nota2 = new Nota("Dezembro", 10);
		
		aluno1.notas[0] = nota0;
		aluno1.notas[1] = nota1;
		aluno1.notas[2] = nota2;
		
		aluno1.addNota(aluno1.notas);
		System.out.println("Aluno: "+ aluno1.getNome()+ " Media : "+ aluno1.getMedia()); 
		System.out.println("CPF: "+ aluno1.getCpf());
		
	}
}
