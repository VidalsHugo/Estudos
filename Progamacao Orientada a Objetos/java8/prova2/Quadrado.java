package prova2;

public class Quadrado extends Retangulo{

	public Quadrado(double l, double c) {
		super(l, c);
		
	}
	
	@Override
	public void imprimir() {
		
		System.out.println("Area do Quadrado: " + getArea() + " Perimetro do Quadrado: " + getPerimetro());
		
	}
	
}
