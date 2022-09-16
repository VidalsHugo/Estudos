package Exercicio;

public class Retangulo extends Poligono{
	
	private double base, altura;
	private double area;
	
	public Retangulo(double base, double altura){
		
		this.base = base;
		this.altura = altura;
	}
	
	@Override
	public void calcular_area() {
		
		area = base*altura;
		
	}

	public double getBase() {
		return base;
	}

	public void setBase(double base) {
		this.base = base;
	}

	public double getAltura() {
		return altura;
	}

	public void setAltura(double altura) {
		this.altura = altura;
	}

	public double getArea() {
		return area;
	}

	public void setArea(double area) {
		this.area = area;
	}
	
	
}
