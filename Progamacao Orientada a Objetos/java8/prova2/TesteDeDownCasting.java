package prova2;

public class TesteDeDownCasting {
	
	public static void main(String[] args) {
		
		
		Elipse e1 = new Elipse(7, 4.1);
		Circulo c1 = new Circulo(5, 5);
		Retangulo r1 = new Retangulo(1.4, 5.4);
		Quadrado q1 = new Quadrado(2.1,2.1);
		
		e1.calcularArea();
		e1.calcularPer();
		e1.imprimir();
		
		c1.calcularArea();
		c1.calcularPer();
		c1.imprimir();
		
		r1.calcularArea();
		r1.calcularPer();
		r1.imprimir();
		
		q1.calcularPer();
		q1.calcularPer();
		q1.imprimir();
		
	
	}
}
