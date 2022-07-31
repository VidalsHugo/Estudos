package com.mycompany.ex1;

/**
 *
 * @author Hugo
 */
public class Ex1 {
    public static void main(String args[]) {
        Bicicleta c1 = new Bicicleta(50);
        Bicicleta c2 = new Bicicleta(50);

        c1.Status();
        c1.Acelerar();
        c1.Acelerar();
        c1.Status();
        c1.Mudarmarcha(3);
        c1.Status();
        c1.Acelerar();
        c1.Acelerar();
        c1.Acelerar();
        c1.Acelerar();
        c1.Mudarmarcha(5);
        c1.Acelerar();
        c1.Acelerar();
        c1.Acelerar();
        c1.Acelerar();
        c1.Acelerar();
        c1.Mudarmarcha(6);
        c1.Freiar();
        c1.Status();
        
        c2.Status();
        c2.Acelerar();
        c2.Acelerar();
        c2.Status();
    }
}