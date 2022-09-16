package Exercicio;

public class Main {

	public static void main(String[] args) {
		
		
		Policomplex poli = new Policomplex();
		
		
		poli.t1.calcular_area();
		poli.t2.calcular_area();
		poli.c1.calcular_area();
		
		System.out.println(poli.t1.getArea());
		System.out.println(poli.t2.getArea());
		System.out.println(poli.c1.getArea());
		
		poli.calcular_area();
		
		System.out.println("Area do Poligono Complexo: "+poli.getArea());
	}
}