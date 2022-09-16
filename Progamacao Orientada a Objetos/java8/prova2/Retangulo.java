package prova2;

public class Retangulo extends Forma{
	
	private double largura;
	private double comprimento;
	private double area;
	private double perimetro;
	
	public Retangulo(double l, double c) {
		this.largura = l;
		this.comprimento = c;
	}
	
	@Override
	public void calcularArea(){
		
		area = largura * comprimento;
		
	}
	@Override
	public void calcularPer() {
		
		perimetro = (largura + comprimento) *2;
		
	}
	@Override
	public void imprimir() {
		
		System.out.println("Area do Retangulo: " + getArea() + " Perimetro do Retangulo: " + getPerimetro());
		
	}

	public double getLargura() {
		return largura;
	}

	public void setLargura(double largura) {
		this.largura = largura;
	}

	public double getComprimento() {
		return comprimento;
	}

	public void setComprimento(double comprimento) {
		this.comprimento = comprimento;
	}

	public double getArea() {
		return area;
	}

	public void setArea(double area) {
		this.area = area;
	}

	public double getPerimetro() {
		return perimetro;
	}

	public void setPerimetro(double perimetro) {
		this.perimetro = perimetro;
	}

}
