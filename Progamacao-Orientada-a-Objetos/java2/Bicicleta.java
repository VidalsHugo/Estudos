
package com.mycompany.ex1;

/**
 *
 * @author Hugo
 */
public class Bicicleta{
    private int velocidade;
    private int marcha;
    private int velocidademaxima;

    public int getmarcha(){
        return this.marcha;
    }
    public int setmarcha(int n){
        this.marcha = n;
        return 0;
    }
     public int setvelocidade(int n){
        this.velocidade = n;
        if(this.getvelocidade() > this.getvelocidademaxima()){
            System.out.println("Velocidade maxima atingida !");
            this.setvelocidade(getvelocidade() - 5);
        }
        return 0;
    }
    public int getvelocidade(){
        return this.velocidade;
    }

    public int getvelocidademaxima(){
        return this.velocidademaxima;
    }
      public int setvelocidademaxima(int n){
        this.velocidademaxima = n;
        return 0;
    }
    public Bicicleta(int vm){
        this.setvelocidade(0);
        this.setmarcha(0);
        this.setvelocidademaxima(vm);
        }
    public int Mudarmarcha(int n){
        if(n <= 5){
            this.setmarcha(n);
        }else{
            System.out.println("Marcha maxima atingida");
        }

        return 0;
    }
    public int Acelerar(){
        this.setvelocidade(getvelocidade() + 5);
        return 0;
    }
    public int Freiar(){
        this.setvelocidade(0);
        return 0;
    }
    public void Status(){
        System.out.println("*****************");
        System.out.println("Velocidade = " + getvelocidade());
        System.out.println("Marcha = " + getmarcha());
        System.out.println("---------------------");
    }
}

