package Exercicio;

public class Policomplex extends Poligono{
	
	private double area;

	
	Triangulo t1 = new Triangulo(7.2f,4.5f);
	Triangulo t2 = new Triangulo(5.4f,6.5f);
	Circulo c1 = new Circulo(7f);
	
	
	public void calcular_area() {
		area = t1.getArea()+t2.getArea()+c1.getArea();
	}
	
	public double getArea() {
		return area;
	}

	public void setArea(double area) {
		this.area = area;
	}
	
}
