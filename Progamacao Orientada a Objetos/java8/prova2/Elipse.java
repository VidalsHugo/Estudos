package prova2;

public class Elipse extends Forma implements Excentricidade{

	private double a;
	private double b, aux;
	private double area;
	private double perimetro;
	private double E;
	
	public Elipse(double a, double b) {
		this.a = a;
		this.b = b;
		
		if(this.b>this.a) {
			aux = this.a;
			this.a = this.b;
			this.b = aux;
		}
		
	}
	
	@Override
	public void excentricidade() {
		
		E = Math.sqrt(1-((Math.pow(b, 2))/Math.pow(a, 2)));
		
	}
	@Override
	public void calcularArea(){
		
		area = Math.PI*a*b;
		
	}
	@Override
	public void calcularPer() {
		
		if(a==b) {
			perimetro = 2*Math.PI*a;
		}else if (a>b){
			perimetro = Math.PI * Math.sqrt(2*(Math.pow(a, 2)+ Math.pow(b, 2))-(Math.pow((a-b), 2)/2));
		}
		
	}
	@Override
	public void imprimir() {
		if(a == b) {
			System.out.println("Area do circulo: "+ getArea() + " Perimetro do circulo: "+ getPerimetro());
		}else if(a>b) {
			System.out.println("Area da elipse: "+ getArea() + " Perimetro da elipse: "+ getPerimetro());
		}
		
	}
	
	public double getA() {
		return a;
	}

	public void setA(double a) {
		this.a = a;
	}

	public double getB() {
		return b;
	}

	public void setB(double b) {
		this.b = b;
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

	public double getE() {
		return E;
	}

	public void setE(double e) {
		E = e;
	}
	
}
