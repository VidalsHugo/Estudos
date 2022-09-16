package Exercicio;

public class Circulo extends Poligono{
	
	private double area;
	private double raio;
	final private double pi = 3.14;
	
	public Circulo(double r){
		this.raio = r;
	}

	@Override
	public void calcular_area(){
		area = pi*(raio*raio);
	}

	public double getArea() {
		return area;
	}

	public void setArea(double area) {
		this.area = area;
	}

	public double getRaio() {
		return raio;
	}

	public void setRaio(double raio) {
		this.raio = raio;
	}

	public double getPi() {
		return pi;
	}
	
}
