
package cachorro1;

public class cachorro{
    String Nome;
    
    public String setNome(String v){
        this.Nome = v;
        return null;
    }
    
     public String getNome(){
        return this.Nome;
    }
    
    public void late(){
        System.out.println("AUAU " + getNome());
    }
}